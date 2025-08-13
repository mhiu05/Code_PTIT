import java.util.*;

public class J01003_Giai_phuong_trinh_bac_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();

        if(a != 0){
            System.out.printf("%.2f", -1.0 * b / a);
        } else{
            if(b == 0){
                System.out.println("VSN");
            } else{
                System.out.println("VN");
            }
        }

        sc.close();
    }
}
