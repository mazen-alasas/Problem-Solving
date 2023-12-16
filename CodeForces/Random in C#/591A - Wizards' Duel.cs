using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            double l = double.Parse(Console.ReadLine());
            double p = double.Parse(Console.ReadLine());
            double q = double.Parse(Console.ReadLine());
            Console.WriteLine((l / (p + q)) * p);
            
        }
    }
}