import java.util.*;

public class J02010_sap_xep_doi_cho_truc_tiep {
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
            for(int j = i + 1; j < n; ++j){
                if(a[i] > a[j]){
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            
            System.out.print("Buoc " + (i + 1) + ": ");
            for(int j = 0; j < n; ++j){
                System.out.print(a[j] + " ");
            }
            System.out.println();

            if(Check(a, n)){
                break;
            }
        }

        sc.close();    }
}
