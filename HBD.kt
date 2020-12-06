fun main() {
    val border="`-._,-'"
    val timestoRepeat = 3
    printBorder(border, timestoRepeat)
    println("Happy Birthday, Jatin!")
    printBorder(border, timestoRepeat)
}

fun printBorder(border: String, timestoRepeat: Int){
    repeat(timestoRepeat){
        print(border)
    }
 	println()
}