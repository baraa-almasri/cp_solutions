package main

import (
	"fmt"
)

func main() {
	var n int
	fmt.Scan(&n)

	studentsFreqs := [3]int{}
	a := make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Scan(&a[i])
		studentsFreqs[a[i]-1]++
	}

	minFreq := studentsFreqs[0]
	for i := 1; i < 3; i++ {
		if minFreq > studentsFreqs[i] {
			minFreq = studentsFreqs[i]
		}
	}

	fmt.Println(minFreq)
	if minFreq == 0 {
		return
	}

	for i := 0; i < minFreq; i++ {
		for t := 1; t <= 3; t++ {
			for j := 0; j < n; j++ {
				if a[j] == t {
					a[j] = 0
					fmt.Printf("%d ", j+1)
					break
				}
			}
		}
		fmt.Println()
	}
}
