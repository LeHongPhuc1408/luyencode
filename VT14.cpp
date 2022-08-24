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
            int tich = a[0] * a[1];
            for ( int i = 0;i < n - 1;i++)
                for(int j=i+1;j<n;j++)
                    if(tich<a[i]*a[j])tich = a[j] * a[i];
            Console.WriteLine(tich);



        }
    }
}