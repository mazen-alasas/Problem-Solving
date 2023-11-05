using System;
using System.Linq;
using System.Collections.Generic;

namespace app1 {
    internal class Program {
        static void Main(string[] args) {
            string[] inp = Console.ReadLine().Split(' ');
            int n = int.Parse(inp[0]), k = int.Parse(inp[1]);
            List<(int, int)> lst = new List<(int, int)>();
            for (int i = 0; i < n; i++) {
                inp = Console.ReadLine().Split(' ');
                (int, int) tuple = (Convert.ToInt32(inp[0]), Convert.ToInt32(inp[1]));
                lst.Add(tuple);
            }
            var sorted = lst.OrderByDescending(a => a.Item1).ThenBy(a => a.Item2);
            Console.WriteLine(sorted.Count(t => t == sorted.ElementAt(k - 1)));
            //Console.ReadKey();
        }
    }
}