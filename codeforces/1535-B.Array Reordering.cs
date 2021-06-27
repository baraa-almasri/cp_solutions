// https://codeforces.com/contest/1535/problem/B
using System;
using System.Linq;
using System.Collections.Generic;

namespace Cff
{
	class Program
	{
		private static uint GetGcd(uint a, uint b)
		{
			uint tmp;
			while (true)
			{
				if (a == 0)
					return b;

				tmp = a;
				a = b % a;
				b = tmp;
			}
		}

		public static void Main(string[] args)
		{
			uint t = Convert.ToUInt32(Console.ReadLine());
			List<uint> a, evens;
			int numPairs;
			
			while (t-- > 0)
			{
				numPairs = 0;
				Console.ReadLine(); // n
				a = Console.ReadLine()
					.Split(" ")
					.Select(s => Convert.ToUInt32(s))
					.ToList();
				
				a.Sort((i, j) => -1*i.CompareTo(j));
				
				evens = (from i in a 
					where i % 2 == 0
					select i ).ToList();
				
				evens.AddRange((from i in a 
					where i % 2 == 1
					select i ).ToList());
				
				for (int i = 0; i < evens.Count; i++)
				for (int j = i + 1; j < evens.Count; j++)
				{
					if (GetGcd(evens[i], 2 * evens[j]) > 1) numPairs++;
				}

				Console.WriteLine(numPairs);
			}
		}
	}
}