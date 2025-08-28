import java.util.*;

public class J01022_Xau_nhi_phan {
    static long [] F = new long[94];

    static void Fibonacci(){
        F[1] = 1;
        F[2] = 1;
        for(int i = 3; i <= 92; ++i){
            F[i] = F[i - 1] + F[i - 2];
        }
    }

    static char Solve(int n, long k){
        if(n == 1) return '0';
        if(n == 2) return '1';
        if(k <= F[n - 2]){
            return Solve(n - 2, k);
        } else {
            return Solve(n - 1, k - F[n - 2]);
        }
    }

    public static void main(String[] args) {
        Fibonacci();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            long k = sc.nextLong();
            System.out.println(Solve(n, k));
            t--;
        }
        sc.close();
    }
}
