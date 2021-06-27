// https://codeforces.com/contest/803/problem/B
using System;
using System.Collections.Generic;
using System.Linq;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			Console.ReadLine();
			List<long> a = Console.ReadLine()
				.Split(" ")
				.Select(s => Convert.ToInt64(s))
				.ToList();

			List<int> zerosIndexes = new List<int>();
			for (int i = 0; i < a.Count; i++)
			{
				if (a[i] == 0L) zerosIndexes.Add(i);
			}

			for (int i = 0, j = 0; i < a.Count; i++)
			{
				Console.Write("{0} ",
					(j + 1 < zerosIndexes.Count && Math.Abs(i - zerosIndexes[j]) > Math.Abs(i - zerosIndexes[j + 1]))
						? Math.Abs(i - zerosIndexes[++j])
						: Math.Abs(i - zerosIndexes[j])
				);
			}
		}
	}
}