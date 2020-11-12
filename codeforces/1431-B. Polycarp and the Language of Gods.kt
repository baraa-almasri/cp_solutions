import java.util.Scanner

fun main() {
    val read = Scanner(System.`in`)

    var t = read.nextInt()
    while(t-- > 0) {
        val VwV = read.next()
        var marked = 0
        var i = 0
        while(i < VwV.length-1) {
            if(VwV[i] == 'v' && VwV[i+1] == 'v') {
                marked++
                i++

            }
            i++
        }

        println(marked+VwV.count{ chr -> chr == 'w' })
    }
}