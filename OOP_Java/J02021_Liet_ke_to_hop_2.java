import java.util.*;

public class J02021_Liet_ke_to_hop_2 {
    static int n, k, cnt = 0;
    static int[] a = new int[11];

    static void Try(int j){
        for(int i = a[j - 1] + 1; i <= n - j + k; ++i){
            a[j] = i;
            if(j == k){
                ++cnt;
                for(int h = 1; h <= k; ++h){
                    System.out.print(a[h]);
                }
                System.out.print(" ");
            } else {
                Try(j + 1);
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        k = sc.nextInt();
        Try(1);
        System.out.println();
        System.out.println("Tong cong co " + cnt + " to hop");
        sc.close();
    }
}
