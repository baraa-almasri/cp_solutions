// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/E
using System;
using System.Linq;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			Console.ReadLine();
			int[] shapes = Console.ReadLine()
				.Split(" ")
				.Select(s => Convert.ToInt32(s))
				.ToArray();
			
			if (shapes[0] == 2)
			{
				Console.WriteLine("First\n3");
			} else if (shapes[^1] == 2)
			{
				Console.WriteLine("Last\n3");
			} else if (shapes[0] == 1 && shapes[^1] == 3)
			{
				Console.WriteLine("Last\n2");
			} else if (shapes[0] == 3 && shapes[^1] == 1)
			{
				Console.WriteLine("First\n2");
			} else if (shapes[0] == shapes[^1] && shapes[0] != 2)
			{
				Console.WriteLine("First\n2");
			}	
		}
	}
}