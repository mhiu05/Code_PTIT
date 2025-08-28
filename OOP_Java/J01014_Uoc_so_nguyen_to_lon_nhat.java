import java.util.*;

public class J01014_Uoc_so_nguyen_to_lon_nhat {
    static long FindMaxPrime(long n){
        long max_val = 0;
        for(int i = 2; i <= Math.sqrt(n); ++i){
            if(n % i == 0){
                max_val = Math.max(max_val, i);
                while(n % i == 0){
                    n /= i;
                }
            }
        }
        if(n != 1){
            max_val = Math.max(max_val, n);
        }
        return max_val;
    } 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            long n = sc.nextLong();
            System.out.println(FindMaxPrime(n));
            t--;
        }
        sc.close();
    }
}
