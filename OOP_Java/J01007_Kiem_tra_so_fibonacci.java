import java.util.*;

public class J01007_Kiem_tra_so_fibonacci{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        long[] F = new long[94];
        F[0] = 0; F[1] = 1; F[2] = 1;
        for(int i = 3; i <= 93; ++i){
            F[i] = F[i - 1] + F[i - 2];
        }
        while(t > 0){
            long n = sc.nextLong();
            boolean check = false;
            for(int i = 0; i <= 93; ++i){
                if(n == F[i]){
                    check = true;
                }
            }
            System.out.println(check ? "YES" : "NO");
            --t;
        }
        sc.close();
    }   
} 