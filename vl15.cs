using System;
namespace Ngay2
{
    class Program
    {
        static int UCLN(int a, int b)
        {
            int r;
            while (b != 0)
            {
                r = a % b;
                a = b;
                b = r;
            }
            return a;
        }
        static void Main(string[] args)
        {
            int a, b, c;
            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());

            c = UCLN(a, b);
            a = a / c;
            b = b / c;
            if (b==0)Console.WriteLine("INVALID");
            if (b<0)Console.WriteLine("{0}/{1}", a*(-1), b*(-1));
            if (a%b==0)Console.WriteLine(a/b);
            else Console.WriteLine("{0}/{1}", a, b);
            Console.ReadLine();
        }
    }
}