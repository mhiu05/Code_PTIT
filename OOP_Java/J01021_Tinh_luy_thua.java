import java.util.*;

public class J01021_Tinh_luy_thua {
    static long MOD = 1000000007;
    static long Binpow(long a, long b){
        if(b == 0) return 1;
        if(b == 1) return a;
        long X = Binpow(a, b / 2);
        if(b % 2 == 0){
            return (X % MOD) * (X % MOD) % MOD;
        }
        return (X % MOD) * (X % MOD) % MOD * a % MOD % MOD;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while(true){
            long a = sc.nextLong();
            long b = sc.nextLong();

            if(a == 0 && b == 0){
                break;
            }

            System.out.println(Binpow(a, b));
        }
        sc.close();
    }
}