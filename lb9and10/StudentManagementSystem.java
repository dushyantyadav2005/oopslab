

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.HashMap;

class Student {
    private String name;
    private int age;
    private String grade;

    public Student(String name, int age, String grade) {
        this.name = name;
        this.age = age;
        this.grade = grade;
    }

    @Override
    public String toString() {
        return "Name: " + name + ", Age: " + age + ", Grade: " + grade;
    }
}

public class StudentManagementSystem extends JFrame {
    private HashMap<String, Student> students = new HashMap<>();
    private JTextField idField, nameField, ageField, gradeField;
    private JTextArea displayArea;

    public StudentManagementSystem() {
        setTitle("Student Management System");
        setSize(500, 500);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        // Input panel
        JPanel inputPanel = new JPanel(new GridLayout(5, 2));
        inputPanel.add(new JLabel("Student ID:"));
        idField = new JTextField();
        inputPanel.add(idField);

        inputPanel.add(new JLabel("Name:"));
        nameField = new JTextField();
        inputPanel.add(nameField);

        inputPanel.add(new JLabel("Age:"));
        ageField = new JTextField();
        inputPanel.add(ageField);

        inputPanel.add(new JLabel("Grade:"));
        gradeField = new JTextField();
        inputPanel.add(gradeField);

        JButton addButton = new JButton("Add Student");
        JButton updateButton = new JButton("Update Student");
        JButton deleteButton = new JButton("Delete Student");
        JButton viewButton = new JButton("View Students");

        inputPanel.add(addButton);
        inputPanel.add(updateButton);
        inputPanel.add(deleteButton);
        inputPanel.add(viewButton);

        add(inputPanel, BorderLayout.NORTH);

        // Display area
        displayArea = new JTextArea();
        add(new JScrollPane(displayArea), BorderLayout.CENTER);

        // Button actions
        addButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String id = idField.getText();
                String name = nameField.getText();
                int age;
                String grade = gradeField.getText();

                try {
                    age = Integer.parseInt(ageField.getText());
                } catch (NumberFormatException ex) {
                    JOptionPane.showMessageDialog(null, "Age must be a number.");
                    return;
                }

                if (!id.isEmpty() && !name.isEmpty() && !grade.isEmpty()) {
                    students.put(id, new Student(name, age, grade));
                    JOptionPane.showMessageDialog(null, "Student added successfully.");
                    clearFields();
                } else {
                    JOptionPane.showMessageDialog(null, "Please fill all fields.");
                }
            }
        });

        updateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String id = idField.getText();
                if (students.containsKey(id)) {
                    String name = nameField.getText();
                    int age;
                    String grade = gradeField.getText();

                    try {
                        age = Integer.parseInt(ageField.getText());
                    } catch (NumberFormatException ex) {
                        JOptionPane.showMessageDialog(null, "Age must be a number.");
                        return;
                    }

                    if (!name.isEmpty() && !grade.isEmpty()) {
                        students.put(id, new Student(name, age, grade));
                        JOptionPane.showMessageDialog(null, "Student updated successfully.");
                        clearFields();
                    } else {
                        JOptionPane.showMessageDialog(null, "Please fill all fields.");
                    }
                } else {
                    JOptionPane.showMessageDialog(null, "Student ID not found.");
                }
            }
        });

        deleteButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                String id = idField.getText();
                if (students.containsKey(id)) {
                    students.remove(id);
                    JOptionPane.showMessageDialog(null, "Student deleted successfully.");
                    clearFields();
                } else {
                    JOptionPane.showMessageDialog(null, "Student ID not found.");
                }
            }
        });

        viewButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                displayArea.setText("");
                if (students.isEmpty()) {
                    displayArea.setText("No student records found.");
                } else {
                    for (String id : students.keySet()) {
                        displayArea.append("ID: " + id + ", " + students.get(id).toString() + "\n");
                    }
                }
            }
        });
    }

    private void clearFields() {
        idField.setText("");
        nameField.setText("");
        ageField.setText("");
        gradeField.setText("");
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            StudentManagementSystem sms = new StudentManagementSystem();
            sms.setVisible(true);
        });
    }
}