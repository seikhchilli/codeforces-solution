import java.util.Scanner;
public class Main{
    public static void main(String [] lol){
        Scanner scanner = new Scanner(System.in);
        int t= scanner.nextInt();
        for(int i=0;i<t;i++){
            int n= scanner.nextInt(); // number of boxes
            int [] candies = new int[n];  // input for arrays
            for(int j=0;j<n;j++){
                candies[j]= scanner.nextInt();
                // read the input for the aarays
            }
            int minCandies= 0;
            for (int candy: candies){ min=Math.min(minCandies,candy);}
            int totalCandiesToEat =0;
            for(int candy : candies){ totalCandiesToEat += candy - minCandies;}
            System.out.println(totalCandiesToEat);
        }
        scanner.close();
    }
}