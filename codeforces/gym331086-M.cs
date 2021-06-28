// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/M
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
			List<int> scores = Console.ReadLine()
				.Split(" ")
				.Select(s => Convert.ToInt32(s))
				.ToList();

			scores.AddRange(Console.ReadLine()
				.Split(" ")
				.Select(s => Convert.ToInt32(s))
				.ToList());
			
			scores.RemoveAll(i => i < 0);
			scores.Sort((i, j) => i.CompareTo(j));
			
			foreach (var i in scores)
			{
				Console.Write($"{i} ");
			}
			if (scores.Count == 0)
				Console.WriteLine(-1);
		}
	}
}