using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int t = int.Parse(Console.ReadLine());
            while(t-- > 0) {
                long ctr = 0, sum = 0, n = long.Parse(Console.ReadLine());
                string s = Console.ReadLine();
                char[] a = s.ToCharArray();
                Array.Reverse(a);
                s = new string(a);
                for(int i = 0; i < n; i++) {
                    if(s[i] == '0') {
                        sum += (i - ctr);
                        ctr++;
                        Console.Write(sum + " ");
                    }
                }
                for(long i = ctr + 1; i <= n; i++) {
                    Console.Write("-1 ");
                }
                Console.WriteLine();
            }
            //Console.ReadKey();
        }
    }
}