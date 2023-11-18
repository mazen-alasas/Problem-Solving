using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int t = int.Parse(Console.ReadLine());
            for(int i = 0; i < t; i++) {
                int n = int .Parse(Console.ReadLine());
                Console.WriteLine(n % 3 == 0 ? "Second" : "First");
            }
        }
    }
}