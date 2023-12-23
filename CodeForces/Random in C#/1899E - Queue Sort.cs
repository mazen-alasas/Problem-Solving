using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int t = int.Parse(Console.ReadLine());
            while(t-- > 0) {
                int idx = 0, n = int.Parse(Console.ReadLine());
                long[] a = Console.ReadLine().Split().Select(long.Parse).ToArray();
                long mn = a.Min();
                for(int i = 0; i < n; i++) {
                    if(a[i] == mn) {
                        idx = i;
                        break;
                    }
                }
                bool isSort = true;
                for(int i = idx + 1; i < n && isSort; i++) {
                    if(a[i] < a[i - 1]) {
                        isSort = false;
                    }
                }
                Console.WriteLine(isSort ? idx : -1);
            }
        }
    }
}