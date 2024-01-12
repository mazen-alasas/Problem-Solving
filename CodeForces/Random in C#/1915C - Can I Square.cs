using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int t = int.Parse(Console.ReadLine());
            while (t-- > 0) {
                long sum = 0, n = long.Parse(Console.ReadLine());
                var arr = Console.ReadLine().Split().Select(Int64.Parse).ToArray();
                foreach (long x in arr) {
                    sum += x;
                }
                if (Math.Sqrt(sum) * (long)Math.Sqrt(sum) == sum) {
                    Console.WriteLine("YES");
                } else {
                    Console.WriteLine("NO");
                }
            }
        }
    }
}