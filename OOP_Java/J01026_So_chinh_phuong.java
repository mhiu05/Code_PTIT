import java.util.*;

public class J01026_So_chinh_phuong {
    static boolean Scp(int n){
        int can = (int)Math.sqrt(n);
        if(can * can == n) {
            return true;
        } else {
            return false;
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            if(Scp(n)){
                System.out.println("YES");
            } else{
                System.out.println("NO");
            }
            t--;
        }
        sc.close();
    }
}
