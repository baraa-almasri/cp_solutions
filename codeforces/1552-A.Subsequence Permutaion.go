package main

import (
	"fmt"
	"sort"
	"strings"
)

func main() {
	var t int
	fmt.Scan(&t)

	var s, tmp string
	var n int
	var k int

	var tmp2 []string

	for i := 0; i < t; i++ {
		fmt.Scan(&n)
		fmt.Scan(&s)

		tmp2 = strings.Split(s, "")
		sort.Strings(tmp2)
		tmp = strings.Join(tmp2, "")

		k = 0
		for j := 0; j < n; j++ {
			if s[j] != tmp[j] {
				k++
			}
		}
		fmt.Println(k)
	}
}
