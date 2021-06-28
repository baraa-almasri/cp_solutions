// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/N
using System;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			string[] pt = Console.ReadLine()
				.Split(" ");
			Console.WriteLine(Convert.ToInt32(pt[0]) * Convert.ToInt32(pt[1]));
		}
	}
}