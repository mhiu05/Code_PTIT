import java.util.*;

public class J02014_Diem_can_bang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int[] a = new int[n + 1];
            for(int i = 1; i <= n; ++i){
                a[i] = sc.nextInt();
            }

            int[] F = new int[n + 1];
            F[0] = 0;
            for(int i = 1; i <= n; ++i){
                F[i] = F[i - 1] + a[i];
            }

            int idx = -1;
            for(int i = 1; i <= n; ++i){
                if(F[i - 1] == F[n] - F[i]){
                    idx = i;
                    break;
                }
            }
            System.out.println(idx);
        }
        sc.close();
    }
}
