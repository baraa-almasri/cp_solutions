// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/G
using System;
using System.Linq;

namespace Cff
{
	static class Program
	{
		public static void Main(string[] args)
		{
			int n = Convert.ToInt32(Console.ReadLine());
			int[] a = Console.ReadLine()
				.Split(" ")
				.Select(s => Convert.ToInt32(s))
				.ToArray();

			int lastR = a[0], lastL = a[1];
			bool blyat = true;
			for (int i = 2; i < a.Length; i++)
			{
				if (a[i] <= lastL || a[i] >= lastR)
				{
					blyat = false;
					Console.WriteLine("YES");
					break;
				}

				lastR = i % 2 == 0 ? a[i] : lastR;
				lastL = i % 2 == 1 ? a[i] : lastL;
			}

			if (blyat)
				Console.WriteLine("NO");

		}
	}
}