using System;

namespace ngay3
{
    class Program
    {
        static void Main(string[] args)
        {
            string s1 = Console.ReadLine();
            var s2 = s1.Split(' ');
            int a = Convert.ToInt32(s2[0]);
            int b = Convert.ToInt32(s2[1]);
            int tong = 0;
            for (int i = a; i <= b; i++)
                if (i % 2 == 0) tong = tong + i;
            Console.WriteLine(tong);
        }
    }
}