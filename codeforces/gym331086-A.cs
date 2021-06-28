// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/A
using System;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			string[] dw = Console.ReadLine()
				.Split(" ");
			Console.WriteLine(Math.Max(Convert.ToInt32(dw[0]), Convert.ToInt32(dw[1]))+1);
		}
	}
}