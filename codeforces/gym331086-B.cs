// https://codeforces.com/group/ODI03aEtPQ/contest/331086/problem/B
using System;

namespace Cff
{
	class Program
	{
		public static void Main(string[] args)
		{
			uint t = Convert.ToUInt32(Console.ReadLine());
			string s;
			while (t-- > 0)
			{
				s = Console.ReadLine();
				for (int i = 0; i < s.Length; i++)
				{
					if (s[i].Equals('_'))
					{
						i++;
						Console.Write(char.ToUpper(s[i]));
						continue;
					}
					Console.Write(s[i]);
				}
				Console.WriteLine();
			}
		}
	}
}