using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int t = Int32.Parse(Console.ReadLine());
            for (int i = 0; i < t; i++) {
                string[] line = Console.ReadLine().Split(' ');
                long n = long.Parse(line[0]);
                long k = long.Parse(line[1]);
                long ctr = 0;
                while (n > 0) {
                    if (n % k == 0) {
                        n /= k;
                        ctr++;
                    } else {
                        ctr += (n % k);
                        n -= (n % k);
                    }
                }
                Console.WriteLine(ctr);
            }
            //Console.ReadKey();
        }
    }
}
