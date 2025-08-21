import java.util.*;

public class J01005_Tam_giac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            int H = sc.nextInt();
            for(int i = 1; i <= n - 1; ++i){
                double h = H * Math.sqrt(1.0 * i / n);
                System.out.printf("%.6f ", h);
            }
            System.out.println();
            --t;
        }
        sc.close();
    }
}
