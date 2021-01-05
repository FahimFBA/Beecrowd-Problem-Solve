import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        double A,B,C, avg;
        
        A=input.nextDouble();
        B=input.nextDouble();
        C=input.nextDouble();
        avg=(A/10*2)+(B/10*3)+(C/10*5);
        String media = String.format("MEDIA = %,.1f", avg);

        System.out.print(media +"\n");
    }

    
}
