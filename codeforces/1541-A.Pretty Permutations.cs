// https://codeforces.com/contest/1541/problem/A
using System;
using System.Linq;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			uint t = Convert.ToUInt32(Console.ReadLine());
			uint count;
			int[] a;

			while (t-- > 0)
			{
				count = 0;
				Console.ReadLine(); // n

				a = Console.ReadLine()
					.Split(" ")
					.Select(s => Convert.ToInt32(s))
					.ToArray();

				for (int i = 1; i <= a.Length; i += 2)
				{
					for (int j = i + 1; j <= a.Length; j++)
					{
						if ((a[i - 1] * a[j - 1] == i + j) || (i + 1 <= a.Length && a[i] * a[j - 1] == (i + 1) + j))
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