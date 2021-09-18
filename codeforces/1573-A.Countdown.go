// https://codeforces.com/contest/1573/problem/0
package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)
	var n, ops int
	var s string
	for ; t > 0; t-- {
		fmt.Scan(&n, &s)
		ops = 0
		for index, c := range s {
			ops += int(c - 48)
			if c != '0' && index != n-1 {
				ops++
			}
		}

		fmt.Println(ops)
	}
}
