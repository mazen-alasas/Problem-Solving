using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int k = Int32.Parse(Console.ReadLine());
            int pn = 0;
            while (k > 0) {
                pn++;
                int s = 0;
                string t = pn.ToString();
                for (int j = 0; j < t.Length; j++) {
                    s += (t[j] - '0');
                }
                if (s == 10) {
                    k--;
                }
            }
            Console.WriteLine(pn);
            //Console.ReadKey();
        }
    }
}
