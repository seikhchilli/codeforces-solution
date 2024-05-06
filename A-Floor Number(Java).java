import java.util.Scanner
public class Main{
    public static void main(String [] lol){
        Scanner scanner = new Scanner(System.in);
        int t= scanner.nextInt();
        for(int i =0;i<t;i++){
            int n= scanner.nextInt();     // room number where she lives
            int x= scanner.nexxtInt();  // number of rooms per floors
            int floor =1;
            int apartmentCount =2;
            while(n > apartmentCount){   // brute froces
                apartmentCount += x;
                floor ++;
            }
            System.out.println(floor);

        
        }
        scanner.close();
    }
}