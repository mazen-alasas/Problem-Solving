using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            int t = int.Parse(Console.ReadLine());
            for(int i = 0; i < t; i++) {
                int ctr = 0, ut = 0, z = -1;
                int n = int.Parse(Console.ReadLine());
                string[] inp = Console.ReadLine().Split(' ');
                for(int j = 0; j < n; j++) { 
                    if(j == 0) {
                        z = int.Parse(inp[j]);
                    }
                    int nd = ctr;
                    if (int.Parse(inp[j]) < ut) {
                        nd++;
                    }
                    if(int.Parse(inp[j]) > z) {
                        nd++;
                    }
                    if(nd < 2) {
                        Console.Write(1);
                        if(int.Parse(inp[j]) < ut) {
                            ctr++;
                        }
                        ut = int.Parse(inp[j]);
                    } else {
                        Console.Write(0);
                    }
                }
                Console.WriteLine();
            }
            //Console.ReadKey();
        }
    }
}