using System;

namespace ngay3
{
    class Program
    {
        static void Main(string[] args)
        {

            string s1 = Console.ReadLine();
            int n = Convert.ToInt32(s1);
            int s = 1;         
            for (int i = 1; i <= n; i++)
                s *=i;
 
            Console.WriteLine(s);

        } 
    }
}