import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.sql.*;

public class LoginRegistrationSystem {
    private static final String DB_URL = "jdbc:mysql://localhost:3306/userdb";
    private static final String DB_USER = "root";
    private static final String DB_PASSWORD = "password";

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> new LoginPage().setVisible(true));
    }

    static class LoginPage extends JFrame {
        LoginPage() {
            setTitle("Login");
            setSize(400, 300);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLayout(new GridLayout(4, 2));

            JLabel usernameLabel = new JLabel("Username:");
            JTextField usernameField = new JTextField();

            JLabel passwordLabel = new JLabel("Password:");
            JPasswordField passwordField = new JPasswordField();

            JButton loginButton = new JButton("Login");
            JButton registerButton = new JButton("Register");

            add(usernameLabel);
            add(usernameField);
            add(passwordLabel);
            add(passwordField);
            add(loginButton);
            add(registerButton);

            loginButton.addActionListener(e -> {
                String username = usernameField.getText();
                String password = String.valueOf(passwordField.getPassword());

                if (login(username, password)) {
                    JOptionPane.showMessageDialog(this, "Login Successful!");
                } else {
                    JOptionPane.showMessageDialog(this, "Invalid Username or Password");
                }
            });

            registerButton.addActionListener(e -> {
                new RegistrationPage().setVisible(true);
                this.dispose();
            });
        }

        private boolean login(String username, String password) {
            try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD)) {
                String query = "SELECT * FROM users WHERE username = ? AND password = ?";
                PreparedStatement stmt = conn.prepareStatement(query);
                stmt.setString(1, username);
                stmt.setString(2, password);

                ResultSet rs = stmt.executeQuery();
                return rs.next();
            } catch (SQLException ex) {
                ex.printStackTrace();
                return false;
            }
        }
    }

    static class RegistrationPage extends JFrame {
        RegistrationPage() {
            setTitle("Register");
            setSize(400, 300);
            setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
            setLayout(new GridLayout(5, 2));

            JLabel usernameLabel = new JLabel("Username:");
            JTextField usernameField = new JTextField();

            JLabel passwordLabel = new JLabel("Password:");
            JPasswordField passwordField = new JPasswordField();

            JLabel emailLabel = new JLabel("Email:");
            JTextField emailField = new JTextField();

            JButton registerButton = new JButton("Register");
            JButton backButton = new JButton("Back to Login");

            add(usernameLabel);
            add(usernameField);
            add(passwordLabel);
            add(passwordField);
            add(emailLabel);
            add(emailField);
            add(registerButton);
            add(backButton);

            registerButton.addActionListener(e -> {
                String username = usernameField.getText();
                String password = String.valueOf(passwordField.getPassword());
                String email = emailField.getText();

                if (register(username, password, email)) {
                    JOptionPane.showMessageDialog(this, "Registration Successful!");
                    new LoginPage().setVisible(true);
                    this.dispose();
                } else {
                    JOptionPane.showMessageDialog(this, "Error in Registration!");
                }
            });

            backButton.addActionListener(e -> {
                new LoginPage().setVisible(true);
                this.dispose();
            });
        }

        private boolean register(String username, String password, String email) {
            try (Connection conn = DriverManager.getConnection(DB_URL, DB_USER, DB_PASSWORD)) {
                String query = "INSERT INTO users (username, password, email) VALUES (?, ?, ?)";
                PreparedStatement stmt = conn.prepareStatement(query);
                stmt.setString(1, username);
                stmt.setString(2, password);
                stmt.setString(3, email);

                stmt.executeUpdate();
                return true;
            } catch (SQLException ex) {
                ex.printStackTrace();
                return false;
            }
        }
    }
}
