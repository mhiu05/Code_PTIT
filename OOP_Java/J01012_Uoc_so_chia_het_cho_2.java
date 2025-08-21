import java.util.*;

public class J01012_Uoc_so_chia_het_cho_2 {
    public static int CountDiv(int n){
        int cnt = 0;
        for(int i = 1; i <= Math.sqrt(n); ++i){
            if(n % i == 0){
                if(i % 2 == 0) ++cnt;
                if(i * i != n){
                    if((n / i) % 2 == 0) ++cnt;
                }
            }
        }
        return cnt;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            System.out.println(CountDiv(n));
            t--;
        }
        sc.close();
    }
}
