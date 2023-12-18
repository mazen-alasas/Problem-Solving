using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            var t = int.Parse(Console.ReadLine());
            while(t-- > 0) {
                var n = int.Parse(Console.ReadLine());
                var a = Console.ReadLine().Split().Select(int.Parse).ToArray();
                var ans = -10000;
                var sum = -10000;
                for(var i = 0; i < n; i++) {
                    if(i > 0 && (a[i] - a[i - 1]) % 2 == 0) {
                        sum = 0;
                    } 
                    sum = Math.Max(sum + a[i], a[i]);
                    ans = Math.Max(ans, sum);
                }
                Console.WriteLine(ans);
            }
        }
    }
}