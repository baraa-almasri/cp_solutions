// https://codeforces.com/problemset/problem/1367/B
package main

import (
	"fmt"
)

func main() {
	var t, n int
	fmt.Scan(&t)

	var swaps, evens, evenIndices int
	var a []int

	for i := 0; i < t; i++ {
		fmt.Scan(&n)
		a = make([]int, n)
		swaps, evens, evenIndices = 0, 0, 0

		for j := 0; j < n; j++ {
			fmt.Scan(&a[j])
			if a[j]%2 == 0 {
				evens++
			}
			if j%2 == 0 {
				evenIndices++
			}

			if a[j]%2 != j%2 {
				swaps++
			}
		}

		if swaps%2 == 1 || evens != evenIndices {
			fmt.Println(-1)
			continue
		}
		fmt.Println(swaps / 2)
	}
}
