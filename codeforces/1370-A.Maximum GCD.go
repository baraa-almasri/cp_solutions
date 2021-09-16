// https://codeforces.com/problemset/problem/1370/A
package main

import (
	"fmt"
	"math"
)

func main() {
	var t, n int
	fmt.Scan(&t)

	for ; t > 0; t-- {
		fmt.Scan(&n)
		fmt.Println(math.Max(
			float64(gcd(n, n/2)),
			math.Max(
				float64(gcd(n-1, n/2)),
				float64(gcd(n, (n/2)-1)))))
	}
}

func gcd(a, b int) int {
	if b == 0 {
		return 1
	}
	for rem := a % b; rem > 0; rem = a % b {
		a = b
		b = rem
	}
	return b
}
