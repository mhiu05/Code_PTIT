import java.util.*;

public class J02106_Ma_tran_nhi_phan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 0;
        for(int i = 1; i <= n; ++i){
            int cnt_0 = 0, cnt_1 = 0;
            for(int j = 1; j <= 3; ++j){
                int x = sc.nextInt();
                if(x == 0){
                    cnt_0++;
                } else{
                    cnt_1++;
                }
            }
            if(cnt_1 > cnt_0){
                ++cnt;
            }
        }
        System.out.println(cnt);
        sc.close();
    }
}
