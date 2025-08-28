import java.util.*;

public class J02011_Sap_xep_chon {
    static boolean Check(int[] a, int n){
        for(int i = 1; i < n; ++i){
            if(a[i] < a[i - 1]){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; ++i){
            a[i] = sc.nextInt();
        }

        for(int i = 0; i < n - 1; ++i){
            int min_val = a[i], idx = i;
            for(int j = i + 1; j < n; ++j){
                if(a[j] < min_val){
                    min_val = a[j];
                    idx = j;
                }
            }

            int tmp = a[i];
            a[i] = a[idx];
            a[idx] = tmp;

            System.out.print("Buoc " + (i + 1) + ": ");
            for(int j = 0; j < n; ++j){
                System.out.print(a[j] + " ");
            }
            System.out.println();

            // if(Check(a, n)){
            //     break;
            // }
        }

        sc.close();
    }
}
