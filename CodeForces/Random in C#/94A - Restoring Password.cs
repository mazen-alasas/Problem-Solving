using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            string s = Console.ReadLine();
            string[] a = new string[10];
            for (int i = 0; i < 10; i++) {
                a[i] = Console.ReadLine();
            }
            for (int i = 0; i < s.Length - 9; i++) {
                for (int j = 0; j < 10; j++) {
                    if (a[j] == s.Substring(i, 10)) {
                        Console.Write(j);
                        i += 9;
                        break;
                    }
                }
            }
            //Console.ReadKey();
        }
    }
}