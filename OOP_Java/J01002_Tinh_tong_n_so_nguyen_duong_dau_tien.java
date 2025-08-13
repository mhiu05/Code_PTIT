import java.util.*;

public class J01002_Tinh_tong_n_so_nguyen_duong_dau_tien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            long n = sc.nextInt();
            System.out.println(n * (n + 1) / 2);
            t--;
        }
        sc.close();
    }
}
