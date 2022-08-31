using System;

namespace SUM
{
    class Program
    {
        static void Main(string[] args)
        {

            string s1 = Console.ReadLine();
            int n = Convert.ToInt32(s1);
            int sum = 0;
            for(int i=0;i<=n;i++){
            sum=sum+i;
            }
            Console.WriteLine(sum);

        }
    }
}