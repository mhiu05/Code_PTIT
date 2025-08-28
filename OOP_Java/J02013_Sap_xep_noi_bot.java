import java.util.*;

public class J02013_Sap_xep_noi_bot {
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

        for(int i = 0; i < n; ++i){
            for(int j = 1; j < n - i; ++j){
                if(a[j] < a[j - 1]){
                    int tmp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = tmp;
                }
                // for(int k = 0; k < n; ++k){
                //     System.out.print(a[k] + " ");
                // }
                // System.out.println();
            }

            System.out.print("Buoc " + (i + 1) + ": ");
            for(int j = 0; j < n; ++j){
                System.out.print(a[j] + " ");
            }
            System.out.println();

            if(Check(a, n)){
                break;
            }
            // System.out.println("_____________");
        }

        sc.close();
    }
}
