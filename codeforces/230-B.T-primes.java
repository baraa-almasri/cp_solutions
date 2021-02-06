// https://codeforces.com/problemset/problem/230/B
import java.util.Scanner;

public class Cff { // 🙂🙂
    public static void main(String[] a) {
        Scanner reader = new Scanner(System.in);

        int t = reader.nextInt();
        boolean[] prime = getPrimes(1000000);

        long n;
        long sqrtN;
        while (t-- > 0) {
            n = reader.nextLong();
            sqrtN = (long) Math.sqrt(n);
            System.out.println(
                    (prime[(int) sqrtN] && sqrtN * sqrtN == n && n > 1 ? "YES" : "NO")
            );
        }
    }

    static boolean[] getPrimes(int limit) {
        boolean[] prime = new boolean[limit + 1];

        for (int i = 2; i <= limit; i++) {
            prime[i] = true;
        }

        for (int i = 2; i <= 10000; i++) {
            if (isPrime(i)) {
                prime[i] = true;
                for (int j = 2 * i; j <= limit; j += i) {
                    prime[j] = false;
                }
            }
        }

        return prime;
    }

    static boolean isPrime(long n) {

        for (long i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return n > 1;
    }
}
