using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int t = Int32.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++) {
                long n = long.Parse(Console.ReadLine());
                int ctr = 0;
                while (n % (ctr + 1) == 0) {
                    ctr++;
                }
                Console.WriteLine(ctr);
            }
            //Console.ReadKey();
        }
    }
}
