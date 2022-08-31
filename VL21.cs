using System;

namespace vl21
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int n = Convert.ToInt32(s);
            for (int i = Convert.ToInt32(Math.Sqrt(2*n)); i>=1; i--)
                if (i * (i + 1) <= 2 * n)
                {
                    Console.WriteLine(i);
                    break;
                }
        }
    }
}