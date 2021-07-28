package main

import "fmt"

/*
 * [[[[[[[[[[[[[[[[c++]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[sucks]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[at]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[strings]]]]]]]]]]]]]]]]
 * [[[[[[[[[[[[[[[[:)]]]]]]]]]]]]]]]]
 */

func main() {
	var t, sx, sy, ex, ey int64
	fmt.Scan(&t, &sx, &sy, &ex, &ey)
	var dirs string
	fmt.Scan(&dirs)

	steps := int64(0)
	reached := false

	for _, dir := range dirs {
		switch dir {
		case 'E':
			if ex > sx {
				sx++
			}
			break
		case 'W':
			if ex < sx {
				sx--
			}
			break
		case 'N':
			if ey > sy {
				sy++
			}
			break
		case 'S':
			if ey < sy {
				sy--
			}
			break
		}
		steps++

		if sx == ex && sy == ey {
			reached = true
			break
		}
	}

	if reached {
		fmt.Println(steps)
		return
	}
	fmt.Println(-1)
}
