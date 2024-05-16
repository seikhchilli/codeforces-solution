import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        scanner.nextLine(); 
        for (int i = 0; i < t; i++) {
            String str = scanner.nextLine(); 
            if (str.charAt(0) == 'a' || str.charAt(1) == 'b' || str.charAt(2) == 'c') {
                System.out.println("Yes"); 
            } else {
                System.out.println("No");
            }
        }
    }
}
