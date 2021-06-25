// https://codeforces.com/contest/1541/problem/A
using System;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			ushort t = Convert.ToUInt16(Console.ReadLine());
			ushort n;
			while (t-- > 0)
			{
				n = Convert.ToUInt16(Console.ReadLine());
				if (n % 2 == 0)
				{
					for (int i = 1; i < n; i += 2)
					{
						Console.Write($"{i+1} {i} ");
					}
				}
				else
				{
					for (int i = 1; i < n-2; i += 2)
					{
						Console.Write($"{i+1} {i} ");
					}
					Console.Write($"{n} {n-2} {n-1}");
				}
				
				Console.WriteLine();
			}
		}
	}
}