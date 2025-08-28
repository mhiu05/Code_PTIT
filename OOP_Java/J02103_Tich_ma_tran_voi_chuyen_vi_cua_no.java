import java.util.*;

public class J02103_Tich_ma_tran_voi_chuyen_vi_cua_no {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int test = 1;
        while(t-- > 0){
            System.out.println("Test " + test + ":");

            int n = sc.nextInt(), m = sc.nextInt();
            int[][] a = new int[n][m];
            for(int i = 0; i < n; ++i){
                for(int j = 0; j < m; ++j){
                    a[i][j] = sc.nextInt();
                }
            }

            int[][] b = new int[m][n];
            for(int i = 0; i < m; ++i){
                for(int j = 0; j < n; ++j){
                    b[i][j] = a[j][i];
                }
            }

            for(int i = 0; i < n; ++i){
                for(int j = 0; j < n; ++j){
                    int sum = 0;
                    for(int k = 0; k < m; ++k){
                        sum += a[i][k] * b[k][j];
                    }
                    System.out.print(sum + " ");
                }
                System.out.println();
            }

            ++test;
        }
        sc.close();
    }
}
