using System; 

class URI {

    static void Main(string[] args)  {
            double r, a;
            r = Convert.ToDouble(Console.ReadLine()); // Taking input from the user and converting that input to Double 
            a = 3.14159 * r * r;
            Console.WriteLine("A=" + a.ToString("0.0000")); // converting a to String and also directing 4 digits after the fraction dot

            Console.ReadLine();
        }

}