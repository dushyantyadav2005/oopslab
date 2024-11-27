import java.util.*;

public class q10 {
    public static void main(String[] args) {
        // Using try-with-resources to automatically close the Scanner
            Scanner sc = new Scanner(System.in);
            System.out.println("Please enter the string:");
            String s1 = sc.nextLine();
            System.out.println("Please enter the number:");
            int n = sc.nextInt();

            Map<Character, Integer> mp = new HashMap<>();
            for (int i = 0; i < s1.length(); i++) {
                char currentChar = s1.charAt(i);
                mp.put(currentChar, mp.getOrDefault(currentChar, 0) + 1); // Update the character count
                
                // Check if the count meets or exceeds 'n'
                if (mp.get(currentChar) >= n) {
                    System.out.println("Character '" + currentChar + "' reached count " + n + " at index: " + i);
                }
            }
        } // Scanner automatically closed here
    }

