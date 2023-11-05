using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int t = int.Parse(Console.ReadLine());
            while (t-- > 0) {
                int n = int.Parse(Console.ReadLine());
                string[] inp = Console.ReadLine().Split(' ');
                bool isSorted = true;
                for (int i = 1; i < 2 * n; i *= 2) {
                    for (int j = i / 2; j < Math.Min(i - 1, n - 1); j++) {
                        if (int.Parse(inp[j]) > int.Parse(inp[j + 1])) { 
                            isSorted = false; 
                            break;
                        }
                    }
                    if (!isSorted) {
                        break;
                    }
                }
                Console.WriteLine(isSorted ? "YES" : "NO");
            }
            //Console.ReadKey();
        }
    }
}