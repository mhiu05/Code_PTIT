import java.util.*;
import java.math.*;

public class J02008_BSNN_cua_n_so_nguyen_duong_dau_tien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            BigInteger ans = BigInteger.ONE;
            for(int i = 2; i <= n; ++i){
                BigInteger x = BigInteger.valueOf(i);
                ans = ans.divide(ans.gcd(x)).multiply(x);
            }
            System.out.println(ans);
        }
        sc.close();
    }
}
