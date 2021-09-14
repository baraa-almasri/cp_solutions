// https://codeforces.com/problemset/problem/1433/A
package main

import "fmt"

func main() {
	var t int
	fmt.Scan(&t)
	var x string
	var dig int
	for i := 0; i < t; i++ {
		fmt.Scan(&x)
		dig = int(x[0] - 48)
		fmt.Println(
			(len(x) * (len(x) + 1) / 2) + (dig-1)*(((4)*(5))/2), // Σ i=1 to len(x) + Σ i=1 to 4 i
		)
	}
}
