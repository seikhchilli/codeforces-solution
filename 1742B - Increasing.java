import java.util.Scanner;
import java.util.HashSet;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); 
        
        for (int i = 0; i < t; i++) {
            int n = scanner.nextInt(); 
            int[] arr = new int[n]; 
            for (int j = 0; j < n; j++) {arr[j] = scanner.nextInt();}
            boolean isDistinct = isDistinct(arr);
            if (isDistinct) {System.out.println("YES");
            } else { System.out.println("NO");}
        }
        scanner.close();
    }

    private static boolean isDistinct(int[] arr) {
        HashSet<Integer> set = new HashSet<>();
        for (int num : arr) {
            if (!set.add(num)) {
                return false;
            }
        }
        return true;
    }
}
