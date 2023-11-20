using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int a = 0, b = 0, ctr = 0, t = int.Parse(Console.ReadLine());
            for(int i = 0; i < t; i++) {
                string[] inp = Console.ReadLine().Split(' ');
                int x = int.Parse(inp[0]), y = int.Parse(inp[1]);
                a += x; b += y;
                if((x % 2) != (y % 2)) {
                    ctr++;
                }
            }
            if(a % 2 == 0 && b % 2 == 0) {
                Console.WriteLine(0);
            } else {
                Console.WriteLine((ctr == 0 || ctr % 2 == 1) ? -1 : 1);
            }
        }
    }
}