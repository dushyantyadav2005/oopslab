import javax.swing.*;
import java.awt.*;
import java.text.SimpleDateFormat;
import java.util.Date;
import javax.swing.Timer;

public class DigitalClockApp extends JFrame {
    private JLabel timeLabel;  // Label to display time
    private Timer timer;       // Timer to update the time

    // Constructor to initialize the frame
    public DigitalClockApp() {
        // Create a JLabel to display the time
        timeLabel = new JLabel();
        timeLabel.setFont(new Font("Serif", Font.BOLD, 40)); // Set font size and style
        timeLabel.setHorizontalAlignment(SwingConstants.CENTER);

        // Set the layout of the frame
        setLayout(new BorderLayout());
        add(timeLabel, BorderLayout.CENTER);

        // Initialize the Timer to update the time every second
        timer = new Timer(1000, e -> updateTime());
        timer.start();  // Start the timer

        // Update the time immediately when the application starts
        updateTime();

        // Set up the frame properties
        setTitle("Digital Clock");
        setSize(400, 200);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null); // Center the window
        setVisible(true);  // Display the frame
    }

    // Method to update the time
    private void updateTime() {
        // Get the current time
        SimpleDateFormat sdf = new SimpleDateFormat("HH:mm:ss");
        String currentTime = sdf.format(new Date());

        // Set the text of the label to the current time
        timeLabel.setText(currentTime);
    }

    // Main method to launch the application
    public static void main(String[] args) {
        // Create an instance of the DigitalClockApp
        SwingUtilities.invokeLater(() -> new DigitalClockApp());
    }
}
