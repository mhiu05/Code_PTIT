import java.math.BigInteger;
import java.util.*;

public class J01011_Boi_so_chung_uoc_so_chung{
    static long gcd(long a, long b){
        BigInteger b1 = BigInteger.valueOf(a);
        BigInteger b2 = BigInteger.valueOf(b);
        return b1.gcd(b2).longValue();
    }

    static long lcm(long a, long b){
        BigInteger b1 = BigInteger.valueOf(a);
        BigInteger b2 = BigInteger.valueOf(b);
        return (b1.multiply(b2).divide(b1.gcd(b2))).longValue();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            long a = sc.nextLong();
            long b = sc.nextLong();
            System.out.println(lcm(a, b) + " " + gcd(a, b));
            t--;
        }
        sc.close();
    }
}