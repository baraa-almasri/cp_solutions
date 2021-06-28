// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/D
using System;
using System.Collections.Generic;
using System.Linq;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			List<int> monkes = Console.ReadLine() // sponsored by reddit :)
				.Split(" ")
				.Select(s => Convert.ToInt32(s))
				.ToList();

			monkes.Sort((i, j) => i.CompareTo(j));
			Console.WriteLine(
				(monkes[1] - monkes[0]) + (monkes[2] - monkes[1])
			);
		}
	}
}