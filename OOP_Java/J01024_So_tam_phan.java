import java.util.*;

public class J01024_So_tam_phan {
    static boolean Check(int n){
        while(n != 0){
            int a = n % 10;
            if(a != 0 && a != 1 && a != 2){
                return false;
            }
            n /= 10;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            int n = sc.nextInt();
            if(Check(n)){
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
            t--;
        }
        sc.close();
    }
}
