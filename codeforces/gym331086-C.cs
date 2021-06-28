// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/C
using System;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			uint x = Convert.ToUInt32(Console.ReadLine());
			uint trigs = 0;
			if (x >= 3)
			{
				x -= 3;
				trigs++;
			}
			trigs += trigs > 0? x / 2: 0;
			Console.WriteLine(trigs);
		}
	}
}