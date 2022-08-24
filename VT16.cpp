using System;

namespace vt16
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            int[] a = new int[10000];
            var s1 = s.Split(' ');
            int i = 0,dem = 0;
            while (s1[i] != "0")
            {
                a[i] = Convert.ToInt32(s1[i]);
                i++;
            }
            for(int j=0;j<i;j++)
                if (a[j] < 0)
                {
                    dem++;
                    Console.Write("{0} ", a[j]);
                }
            if (dem == 0) Console.WriteLine("NOT FOUND");
        }
    }
}