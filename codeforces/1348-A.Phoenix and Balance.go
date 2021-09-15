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
		sum1, sum2 = 0, 0

		sum1 += 2 << (n - 1)
		for s1 := 1; s1 < n/2; s1++ {
			sum1 += 2 << (s1 - 1)
		}
		for s2 := (n / 2); s2 < n; s2++ {
			sum2 += 2 << (s2 - 1)
		}

		fmt.Println(math.Abs(float64(sum2 - sum1)))
	}
}
