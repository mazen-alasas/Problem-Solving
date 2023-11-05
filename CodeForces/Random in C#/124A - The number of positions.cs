using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            string[] inp = Console.ReadLine().Split(' ');
            int n = int.Parse(inp[0]), a = int.Parse(inp[1]), b = int.Parse(inp[2]);
            Console.WriteLine(Math.Min(n - a, b + 1));
            //Console.ReadKey();
        }
    }
}
