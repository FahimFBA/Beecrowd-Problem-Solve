import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        double R = scanner.nextDouble();
        System.out.printf("A=%.4f\n", (3.14159 * R * R));
    }
}