// https://codeforces.com/problemset/problem/1348/A
package main

import (
	"fmt"
	"math"
)

func main() {
	var t int
	fmt.Scan(&t)

	var n, sum1, sum2 int
	for ; t > 0; t-- {
		fmt.Scan(&n)

		// everybody is gangsta until power series appears out of no where :)
		sum1 = 2<<(n-1) + // last wieght
			((2 << 0) - (2 << ((n / 2) - 1))) / -1 // Σ k = 1 to (n/2)-1 z^k

		sum2 = ((2 << ((n / 2) - 1)) - (2 << (n - 1))) / -1 // Σ k = n/2 to n-1 z^k

		fmt.Println(math.Abs(float64(sum2 - sum1)))
	}
}
