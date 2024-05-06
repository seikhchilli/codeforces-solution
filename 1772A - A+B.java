import java.util.Scanner;
public class Main{
    public static void main(String [] lol){
        Scanner scanner = new Scanner(System.in);
        int t= scanner.nextInt();
        scanner.nextLine(); // takes the input for equation
        for ( int i =0 ;i< t ;i++){
            String numbers= scanner.nextLine().split("\\+");
            int a = Interger.parseInt(numbers[0]);
            int b= Interger.parseInt(numbers[1]);

            System.out.println(a+b);

        }
        scanner.close();
    }
}
