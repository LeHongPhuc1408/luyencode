using System;
public class Program
{
    static void Main(string[] args)
    {
        double r, chu_vi, dien_tich;
            double PI = 3.14;
            r = Convert.ToDouble(Console.ReadLine());
            chu_vi = 2 * PI * r;
            Console.WriteLine(chu_vi);
            dien_tich = PI * r * r;
            Console.WriteLine(dien_tich);

    }
}