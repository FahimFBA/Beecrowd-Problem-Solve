import java.io.IOException;

public class Main {

 

    public static void main(String[] args) throws IOException {

 

        for (int i = 1,j =7; i <= 9; i += 2,j += 2) {

            for (int l = i, k = j; k >= (j-2); k--) {

                System.out.print("I="+l+" J="+k+"\n");

            }

        }

 

    }

}