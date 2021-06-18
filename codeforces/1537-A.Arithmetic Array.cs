// https://codeforces.com/contest/1537/problem/A
using System;
using System.Linq;
using System.Collections.Generic;

namespace Cff {
	class Program {
		public static void Main(string[] args) {
			ushort t = Convert.ToUInt16(Console.ReadLine());
			int n;
			while (t-- > 0) {
				n = Convert.ToInt32(Console.ReadLine());
				string[] a0 = Console.ReadLine().Split(" ");
				IEnumerable<int> a = from aa in a0
					select Convert.ToInt32(aa);

				int count =
					(a.Sum() > n) ? a.Sum() - n :
					(a.Sum() == 0) ? 1 :
					(a.Sum() < n) ? 1 : 0;

				Console.WriteLine(count);
			}
		}
	}
}