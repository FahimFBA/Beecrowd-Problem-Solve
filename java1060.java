import java.util.*;

public class Main {
    public static void main(String args[]) {
     double n;
     int tmp = 0, i;
     Scanner sc = new Scanner(System.in);
    
     for (i = 0; i < 6; ++i)
     {
      n = sc.nextDouble();
      if(n > 0){
       tmp++;
      }
     }
        
     System.out.printf("%d valores positivos\n", tmp);
    }
}