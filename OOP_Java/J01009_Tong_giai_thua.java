import java.util.*;

public class J01009_Tong_giai_thua {
    static long factorial(long n){
        long ans = 1;
        for(int i = 1; i <= n; ++i){
            ans *= i;
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long S = 0;
        long n = sc.nextLong();
        for(int i = 1; i <= n; ++i){
            S += factorial(i);
        }
        System.out.println(S);
        sc.close();
    }
}
