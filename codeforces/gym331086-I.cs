// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/I
using System;
using System.Linq;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			Console.ReadLine();
			int[] a = Console.ReadLine()
				.Split(" ")
				.Select(s => Convert.ToInt32(s))
				.ToArray();

			bool[] isPos = new bool[a.Length];
			
			for (int i = 0; i < a.Length; i++)
			{
				if (a[i] > 0)
				{
					isPos[a[i] - 1] = true;
				}
			}

			for (int i = 0; i < isPos.Length; i++)
			{
				if (!isPos[i])
					Console.Write($"{i+1} ");
			}
		}
	}
}