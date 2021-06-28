// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/H
using System;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			uint t = Convert.ToUInt32(Console.ReadLine());
			ulong n;
			while (t-- > 0)
			{
				n = Convert.ToUInt64(Console.ReadLine());
				Console.WriteLine(1+(5*((n)*(n+1)/2)));
			}
		}
	}
}