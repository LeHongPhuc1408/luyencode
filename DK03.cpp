using System;

namespace luyencode
{
    internal class Program
    {
        static void Main(string[] args)
        {
            var numbers = Console.ReadLine();
            var numberList = numbers.Split(' ');
            var a = Convert.ToInt32(numberList[0]);
            var b = Convert.ToInt32(numberList[1]);
            if (a >= b)
            {
                Console.WriteLine(Math.Abs(a - b));
            }
            if (a < b)
            {
                Console.WriteLine(Math.Abs(b - a));
            }
        } 
    }
}