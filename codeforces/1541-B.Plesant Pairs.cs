// https://codeforces.com/contest/1541/problem/B
using System;
using System.Linq;
using System.Collections.Generic;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			uint t = Convert.ToUInt32(Console.ReadLine());
			uint count;
			// int[] a;

			while (t-- > 0)
			{
				count = 0;
				Console.ReadLine(); // n

				List<KeyValuePair<int, int>> pairs = Console.ReadLine()
					.Split(" ")
					.Select(s => Convert.ToInt32(s))
					.ToArray()
					.Select((v, i) => new KeyValuePair<int, int>(v, i + 1))
					.ToList();
	
				pairs.Sort((i, j) => i.Key.CompareTo(j.Key));

				for (int i = 0; i < pairs.Count && pairs[i].Key * pairs[i].Key <= 2 * pairs.Count; i++)
				{
					for (int j = i+1; j < pairs.Count && pairs[i].Key * pairs[j].Key <= 2*pairs.Count; j++)
					{
						if (pairs[i].Key * pairs[j].Key == pairs[i].Value + pairs[j].Value)
						{
							count++;
						}
					}
				}

				Console.WriteLine(count);
			}
		}
	}
}