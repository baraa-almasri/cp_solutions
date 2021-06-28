// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/K
using System;
using System.Linq;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			double[] xn = Console.ReadLine() // sponsored by reddit :)
				.Split(" ")
				.Select(s => Convert.ToDouble(s))
				.ToArray();

			Console.WriteLine("{0:0.0000000}", xn[1]/ xn[0]);
		}
	}
}