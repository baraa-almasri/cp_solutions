import java.util.Scanner

fun main() {
    val read = Scanner(System.`in`)

    var t = read.nextInt()
    while(t-- > 0) {
        val n = read.nextInt()
        val coins = ArrayList<Long>(0)
        for(i in 1..n) {
            coins.add(read.nextLong())
        }
        coins.sort()
        val burguerPrices = ArrayList<Long>(0)
        for((i, e) in coins.withIndex()) {
            burguerPrices.add(
                    coins[i]*(coins.size-i)
            )
        }
        println(burguerPrices.max()!!)
    }

}
