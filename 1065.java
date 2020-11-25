import java.util.*;

public class Main {
    public static void main(String args[]) {
    int a, i;
 int tmp = 0;
    Scanner input = new Scanner(System.in);
 for (i = 0; i < 5; ++i)
 {
  a = input.nextInt();
  if(a < 0){
   a = -a;
  }

  if(a % 2 == 0){
   tmp++;
  }
 }

  System.out.printf("%d valores pares\n", tmp);
    }
}