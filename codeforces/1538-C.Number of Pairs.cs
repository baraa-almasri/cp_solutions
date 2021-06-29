// https://codeforces.com/contest/1538/problem/C
using System;
using System.Collections.Generic;
using System.Linq;

namespace Cff
{
	static class Program
	{
		private static void Deconstruct<T>(this T[] arr, out T v1, out T v2, out T v3)
		{
			v1 = arr[0];
			v2 = arr[1];
			v3 = arr[2];
		}

		private static long GetPairs(List<KeyValuePair<long, int>> arr, long target)
		{
			long numPairs = 0L;
			int l = 0, r = arr.Count - 1;
			while (l < r)
			{
				if (arr[l].Key + arr[r].Key <= target)
				{
					numPairs += (r - l);
					l++;
				}
				else
					r--;
			}

			return numPairs;
		}

		public static void Main(string[] args)
		{
			uint t = Convert.ToUInt32(Console.ReadLine());
			long n, l, r;
			List<KeyValuePair<long, int>> a, upper, lower;
			long count;

			while (t-- > 0)
			{
				(_, l, r) = Console.ReadLine()
					.Split(" ")
					.Select(s => Convert.ToInt64(s))
					.ToArray();

				a = Console.ReadLine()
					.Split(" ")
					.Select(s => Convert.ToInt64(s))
					.Select((v, i) => new KeyValuePair<long, int>(v, i))
					.ToList();

				a.Sort((p1, p2) => p1.Key.CompareTo(p2.Key));

				Console.WriteLine(GetPairs(a, r) - GetPairs(a, l-1));
			}
		}
	}
}