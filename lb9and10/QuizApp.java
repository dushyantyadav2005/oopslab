import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class QuizApp {
    // Variables to hold the current question index and score
    private int currentQuestion = 0;
    private int score = 0;
    
    // Array of questions and answer choices
    private String[] questions = {
        "What is the capital of France?",
        "Which planet is known as the Red Planet?",
        "What is the largest ocean on Earth?"
    };
    
    private String[][] options = {
        {"Berlin", "Madrid", "Paris", "Rome"},
        {"Earth", "Mars", "Jupiter", "Venus"},
        {"Atlantic", "Pacific", "Indian", "Arctic"}
    };
    
    private int[] correctAnswers = {2, 1, 1}; // Index of correct answers (starting from 0)
    
    // UI Components
    private JLabel questionLabel;
    private JRadioButton[] optionButtons;
    private ButtonGroup optionsGroup;
    private JButton nextButton, submitButton, finishButton;
    private JPanel optionsPanel;
    
    public QuizApp() {
        JFrame frame = new JFrame("Quiz Application");
        frame.setLayout(new BorderLayout());
        
        // Set up question label
        questionLabel = new JLabel(questions[currentQuestion]);
        questionLabel.setFont(new Font("Arial", Font.PLAIN, 18));
        frame.add(questionLabel, BorderLayout.NORTH);
        
        // Set up the panel to hold the options
        optionsPanel = new JPanel(new GridLayout(4, 1));
        optionButtons = new JRadioButton[4];
        optionsGroup = new ButtonGroup();
        
        for (int i = 0; i < 4; i++) {
            optionButtons[i] = new JRadioButton(options[currentQuestion][i]);
            optionsGroup.add(optionButtons[i]);
            optionsPanel.add(optionButtons[i]);
        }
        frame.add(optionsPanel, BorderLayout.CENTER);
        
        // Set up buttons
        nextButton = new JButton("Next");
        nextButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                // Check answer and update score
                checkAnswer();
                
                // Move to next question
                currentQuestion++;
                
                // If the quiz is complete, show finish button
                if (currentQuestion >= questions.length) {
                    nextButton.setEnabled(false);
                    finishButton.setEnabled(true);
                } else {
                    updateQuestion();
                }
            }
        });
        
        submitButton = new JButton("Submit");
        submitButton.setEnabled(false); // Initially disabled
        finishButton = new JButton("Finish");
        finishButton.setEnabled(false);
        finishButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                JOptionPane.showMessageDialog(frame, "Your final score is: " + score + " out of " + questions.length);
            }
        });
        
        // Create a panel for buttons
        JPanel buttonPanel = new JPanel();
        buttonPanel.add(nextButton);
        buttonPanel.add(submitButton);
        buttonPanel.add(finishButton);
        frame.add(buttonPanel, BorderLayout.SOUTH);
        
        // Set up frame properties
        frame.setSize(400, 300);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
    
    private void checkAnswer() {
        for (int i = 0; i < 4; i++) {
            if (optionButtons[i].isSelected()) {
                if (i == correctAnswers[currentQuestion]) {
                    score++;
                }
                break;
            }
        }
    }
    
    private void updateQuestion() {
        questionLabel.setText(questions[currentQuestion]);
        optionsPanel.removeAll();
        
        for (int i = 0; i < 4; i++) {
            optionButtons[i].setText(options[currentQuestion][i]);
            optionsPanel.add(optionButtons[i]);
        }
        optionsGroup.clearSelection();
        optionsPanel.revalidate();
        optionsPanel.repaint();
    }

    public static void main(String[] args) {
        new QuizApp();
    }
}

