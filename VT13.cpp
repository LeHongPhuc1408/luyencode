using System;

namespace baivt13
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = Convert.ToInt32(Console.ReadLine());
            int[] a = new int[n + 1];
            int[] b = new int[n + 1];
            string s = Console.ReadLine();
            var s1 = s.Split(' ');
            for (int i = 0; i < n; i++)
                a[i] = Int32.Parse(s1[i]);
            a[n] = a[0];
            for (int i = 0; i < n; i++)
                b[i] = a[i] + a[i + 1];
            int max = b[0];
            for (int i = 0; i < n; i++)
                if (b[i] > max) max = b[i];

                for (int i=n-1;i>0;i--)
                if (max == a[i] + a[i + 1])
                {
                    Console.WriteLine("{0} {1}", a[i],a[i+1]);
            break;

                }
        }
    }
}