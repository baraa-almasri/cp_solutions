package main

import (
	"fmt"
)

func main() {
	var t, n int
	fmt.Scan(&t)
	var a []int

	for i := 0; i < t; i++ {
		fmt.Scan(&n)
		if (n/2)%2 == 1 {
			fmt.Println("NO")
			continue
		}

		a = make([]int, n)
		j, esum := 0, 0
		for e := 2; e <= n; e += 2 { // evens
			a[j] = e
			esum += e
			j++
		}

		osum := 0
		for o := 1; j < n; o += 2 { // odds
			a[j] = o
			osum += o
			j++
		}

		if esum != osum {
			a[n-1] += (esum - osum)
		}

		fmt.Println("YES")
		for k := 0; k < n; k++ {
			fmt.Printf("%d ", a[k])
		}
		fmt.Println()
	}
}
