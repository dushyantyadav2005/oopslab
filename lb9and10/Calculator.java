import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.FocusEvent;
import java.awt.event.FocusListener;
import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

public class Calculator extends JFrame implements ActionListener, FocusListener {

    JLabel l_num1, l_num2, l_result;
    JTextField tf1, tf2, tf3;
    JButton b_add, b_subtract, b_multiply, b_divide, b_exit, b_erase;
    JButton one, zero, two, three, four, five, six, seven, eight, nine;

    // Flag to indicate which text field is active
    boolean firstFieldActive = true;

    public Calculator() {
        // Set layout
        FlowLayout f1 = new FlowLayout();
        setLayout(f1);

        // Initialize components
        l_num1 = new JLabel("Enter number (a): ");
        l_num2 = new JLabel("Enter number (b): ");
        l_result = new JLabel("Output is: ");
        tf1 = new JTextField(10);
        tf2 = new JTextField(10);
        tf3 = new JTextField(25);
        b_add = new JButton("ADD");
        b_subtract = new JButton("SUBTRACT");
        b_multiply = new JButton("MULTIPLY");
        b_divide = new JButton("DIVIDE");
        b_exit = new JButton("EXIT");
        b_erase = new JButton("ERASE");

        // Number buttons
        one = new JButton("1");
        two = new JButton("2");
        three = new JButton("3");
        four = new JButton("4");
        five = new JButton("5");
        six = new JButton("6");
        seven = new JButton("7");
        eight = new JButton("8");
        nine = new JButton("9");
        zero = new JButton("0");
        // one=new JButton("3");

        // Add components to the frame
        add(l_num1);
        add(tf1);
        add(l_num2);
        add(tf2);
        add(l_result);
        add(tf3);
        add(b_add);
        add(b_subtract);
        add(b_multiply);
        add(b_divide);
        add(b_exit);
        add(b_erase);
        add(one);
        add(two);
        add(three);
        add(four);
        add(five);
        add(six);
        add(seven);
        add(eight);
        add(nine);
        add(zero);

        // Add action listeners
        b_add.addActionListener(this);
        b_subtract.addActionListener(this);
        b_multiply.addActionListener(this);
        b_divide.addActionListener(this);
        b_exit.addActionListener(this);
        b_erase.addActionListener(this);
        one.addActionListener(this);
        two.addActionListener(this);
        three.addActionListener(this);
        four.addActionListener(this);
        five.addActionListener(this);
        six.addActionListener(this);
        seven.addActionListener(this);
        eight.addActionListener(this);
        nine.addActionListener(this);
        zero.addActionListener(this);

        // Add focus listeners to text fields to switch active field
        tf1.addFocusListener(this);
        tf2.addFocusListener(this);
    }

    // Handle focus gained events to switch active text field
    @Override
    public void focusGained(FocusEvent e) {
        if (e.getSource() == tf1) {
            firstFieldActive = true;
        } else if (e.getSource() == tf2) {
            firstFieldActive = false;
        }
    }

    @Override
    public void focusLost(FocusEvent e) {
        // Nothing to handle here
    }

    public void actionPerformed(ActionEvent e) {
        // Check if a number button is pressed
        if (e.getSource() == one) {
            appendNumberToActiveField("1");
        } else if (e.getSource() == two) {
            appendNumberToActiveField("2");
        } else if (e.getSource() == three) {
            appendNumberToActiveField("3");
        } else if (e.getSource() == four) {
            appendNumberToActiveField("4");
        } else if (e.getSource() == five) {
            appendNumberToActiveField("5");
        } else if (e.getSource() == six) {
            appendNumberToActiveField("6");
        } else if (e.getSource() == seven) {
            appendNumberToActiveField("7");
        } else if (e.getSource() == eight) {
            appendNumberToActiveField("8");
        } else if (e.getSource() == nine) {
            appendNumberToActiveField("9");
        } else if (e.getSource() == zero) {
            appendNumberToActiveField("0");
        } else {
            // Perform arithmetic operations
            String num1 = tf1.getText();
            String num2 = tf2.getText();
            if (num1.isEmpty() || num2.isEmpty()) {
                tf3.setText("Please enter both numbers");
                return;
            }
            int s1 = Integer.parseInt(num1);
            int s2 = Integer.parseInt(num2);
            double result = 0;

            if (e.getSource() == b_add) {
                result = s1 + s2;
                tf3.setText((int) result + "");
            } else if (e.getSource() == b_subtract) {
                result = s1 - s2;
                tf3.setText((int) result + "");
            } else if (e.getSource() == b_multiply) {
                result = s1 * s2;
                tf3.setText((int) result + "");
            } else if (e.getSource() == b_divide) {
                try {
                    result = (double) s1 / s2;
                    tf3.setText(result + "");
                } catch (Exception ex) {
                    tf3.setText("Error: " + ex.getMessage());
                }
            } else if (e.getSource() == b_erase) {
                tf1.setText("");
                tf2.setText("");
                tf3.setText("");
            } else if (e.getSource() == b_exit) {
                System.exit(0);
            }
        }
    }

    // Append number to the active text field
    private void appendNumberToActiveField(String number) {
        if (firstFieldActive) {
            tf1.setText(tf1.getText() + number);
        } else {
            tf2.setText(tf2.getText() + number);
        }
    }

    public static void main(String[] args) {
        Calculator frame = new Calculator();
        frame.setSize(300, 400);  // Set size appropriately
        frame.setVisible(true);
        frame.setTitle("Simple Calculator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
