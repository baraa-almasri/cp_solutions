// https://codeforces.com/contest/1566/problem/0
package main

import (
	"fmt"
	"math"
)

func main() {
	var t, n, s int
	fmt.Scan(&t)

	for i := 0; i < t; i++ {
		fmt.Scan(&n, &s)
		cells := int(math.Ceil(float64(n) / 2.0))
		if n%2 == 0 {
			cells++
		}

		fmt.Println(s / cells)
	}
}
