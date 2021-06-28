// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/L
using System;
using System.Linq;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			double[] rhw = Console.ReadLine()
				.Split(" ")
				.Select(s => Convert.ToDouble(s))
				.ToArray();

			double f = Math.Sqrt(Math.Pow(rhw[2] / 2, 2) + Math.Pow(rhw[1], 2));
			Console.WriteLine(f <= rhw[0]? "YES": "NO");
		}
	}
}