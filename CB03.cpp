using System;
public class Program
{
    static void Main(string[] args)
    {
        var numbers = Console.ReadLine();
        var numberList = numbers.Split(' ');
        var number1 = Convert.ToInt32(numberList[0]);
        var number2 = Convert.ToInt32(numberList[1]);
        var number3 = Convert.ToInt32(numberList[2]);
        Console.WriteLine(number1 + number2 + number3);
    }
}