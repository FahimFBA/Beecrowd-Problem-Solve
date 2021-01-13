import java.util.Scanner;

public class main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        int i;
        int len;
        for (i=0; i<=t; i++) {
            String v = input.nextLine();
            len = length(v);
            if (len>=0 && len<=251){
                System.out.println("Y");
            }
            else {
                System.out.println("N");
            }
            
        }
    }

    private static int length(String v) {
        return 0;
    }

     
}