// https://codeforces.com/problemset/problem/1371/A
package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)
	var n int64
	for ; t > 0; t-- {
		fmt.Scan(&n)
		if n%2 == 0 {
			fmt.Println(n / 2)
			continue
		}
		fmt.Println(1 + n/2)
	}
}
