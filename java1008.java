import java.util.Scanner;
public class java1008{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        int num, workedHours;
        num = input.nextInt();
        workedHours = input.nextInt();

        double PworkedHours;
        PworkedHours = input.nextDouble();

        System.out.print("NUMBER = " + num + "\n");
       

        double result;
        result = (workedHours*PworkedHours);

        System.out.printf("SALARY = U$ " + String.format("%.2f" , result) + "\n");
    }
}