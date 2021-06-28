// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/F
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
			double x = Convert.ToDouble(Console.ReadLine());
			List<long> marks = Console.ReadLine()
				.Split(" ")
				.Select(s => Convert.ToInt64(s))
				.ToList();
			marks.Sort(((i, j) => i.CompareTo(j)));

			double xs = 0;
			List<double> avgs = new List<double>();
			double totalMarks = marks.Sum();

			for (int i = 0; i < marks.Count; i++)
			{
				avgs.Add((totalMarks/(marks.Count-i)) - xs);
				totalMarks -= marks[i];
				xs += x;
			}
			
			Console.WriteLine("{0:0.0000000}", avgs.Max());
		}
	}
}