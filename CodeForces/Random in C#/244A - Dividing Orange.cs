using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            string[] inp = Console.ReadLine().Split(' ');
            int n = int.Parse(inp[0]), m = int.Parse(inp[1]);
            bool[] b = new bool[909];
            inp = Console.ReadLine().Split(' ');
            int[] a = new int[m];
            for (int i = 0; i < m; i++) {
                a[i] = int.Parse(inp[i]);
                b[a[i]] = true;
            }
            for (int i = 0, ctr = 1;i < m; i++) {
                Console.Write(a[i]);
                int j = 1;
                while (j < n) {
                    if (!b[ctr]) {
                        Console.Write(" " + ctr);
                        j++;
                    }
                    ctr++;
                }
                Console.WriteLine();
            }
            //Console.ReadKey();
        }
    }
}