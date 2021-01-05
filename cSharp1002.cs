using System; 

class URI {

    static void Main(string[] args)  {
            double r, a;
            r = Convert.ToDouble(Console.ReadLine());
            a = 3.14159 * r * r;
            Console.WriteLine("A=" + a.ToString("0.0000"));

            Console.ReadLine();
        }

}