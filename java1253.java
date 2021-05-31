import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        String str1 = input.nextLine();
        int k = 0;
        for (int i = 0; i < t ; i++)
        {
            str1 = input.nextLine();
            if (k != 0)
            {
                str1 = input.nextLine();
            }
            int n = input.nextInt();
            char[] str2 = new char[str1.length()];

            // changing the input

            for (int j = 0; j < str1.length(); j++){
                int z = ((int)str1.charAt(j)-n);

                if (z < 65){
                    z = z + 26; // wrapping up at the end of the alphabet
                }
                str2[j] = (char)z;
                System.out.print(str2[j]);
            }
            System.out.println();
            k++;
        }

    }
}
