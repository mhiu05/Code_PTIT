import java.util.*;

public class J01008_Phan_tich_thua_so_nguyen_to {
    public static void tsnt(int n) {
        for(int i = 2; i <= Math.sqrt(n); ++i){
            if(n % i == 0){
                int cnt= 0;
                while(n % i == 0){
                    ++cnt;
                    n /= i;
                }
                System.out.printf("%d(%d) ", i, cnt);
            }
        }
        if(n != 1){
            System.out.printf("%d(1)", n);
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int cnt = 0;
        while(t > 0){
            ++cnt;
            int n = sc.nextInt();
            System.out.printf("Test %d: ", cnt);
            tsnt(n);
            System.out.println();
            --t;
        }
        sc.close();
    }

}
