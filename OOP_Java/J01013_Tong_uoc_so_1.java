import java.util.*;

public class J01013_Tong_uoc_so_1 {
    static final int N = 2000000;
    static int[] spf = new int[N + 1]; // smallest prime factor
    static int[] f = new int[N + 1];   // tổng thừa số nguyên tố

    static void sieve() {
        for (int i = 2; i <= N; i++) {
            if (spf[i] == 0) { // i là số nguyên tố
                for (int j = i; j <= N; j += i) {
                    if (spf[j] == 0) spf[j] = i;
                }
            }
        }

        // tính f[n] = tổng thừa số nguyên tố
        f[1] = 0;
        for (int i = 2; i <= N; i++) {
            f[i] = f[i / spf[i]] + spf[i];
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sieve();

        int n = sc.nextInt();
        long ans = 0;
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            ans += f[x];
        }
        System.out.println(ans);
        sc.close();
    }
}