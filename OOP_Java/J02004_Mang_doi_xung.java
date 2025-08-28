import java.util.*;

public class J02004_Mang_doi_xung {
    static boolean Check(int []a, int n){
        for(int i = 0; i < n; ++i){
            if(a[i] != a[n - i - 1]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            int[] a = new int[n];
            for(int i = 0; i < n; ++i){
                a[i] = sc.nextInt();
            }
            if(Check(a, n)){
                System.out.println("YES");
            } else{
                System.out.println("NO");
            }
            t--;
        }
        sc.close();
    }
}
