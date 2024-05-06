import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input the number of test cases
        System.out.println("Enter the number of test cases:");
        int t = scanner.nextInt();
        scanner.nextLine(); // Consume newline character

        for (int i = 0; i < t; i++) {
            // Input the array elements
            System.out.println("Enter elements of array " + (i + 1) + ":");
            String[] input = scanner.nextLine().split(" ");
            int[] arr = new int[input.length];

            // Convert String array to integer array
            for (int j = 0; j < input.length; j++) {
                arr[j] = Integer.parseInt(input[j]);
            }

            // Find the maximum and minimum numbers in the array
            int maxNum = Integer.MIN_VALUE;
            int minNum = Integer.MAX_VALUE;
            for (int num : arr) {
                maxNum = Math.max(maxNum, num);
                minNum = Math.min(minNum, num);
            }

            // Print the number that is neither maximum nor minimum
            for (int num : arr) {
                if (num != maxNum && num != minNum) {
                    System.out.println("Number that is neither maximum nor minimum: " + num);
                    break; // Exit the loop after finding the number
                }
            }
        }
    }
}
