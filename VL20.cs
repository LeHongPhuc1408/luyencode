using System;

namespace baivl19
{
    class Program
    {
        static void Main(string[] args)
        {
            string s = Console.ReadLine();
            var s1 = s.Split(' ');
            char a = Convert.ToChar(s1[0].ToUpper());
            char b = Convert.ToChar(s1[1].ToUpper());
            for (char i = a; i <= b; i++)
                {
                    Console.Write("{0} ", i);
                   
                }
        }
    }
}