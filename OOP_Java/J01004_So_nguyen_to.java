import java.util.*;

public class J01004_So_nguyen_to {
    static boolean Check (int n){
        if(n <= 1) return false;
        for(int i = 2; i <= Math.sqrt(n); ++i){
            if(n % i == 0) return false;
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
            } else{
                System.out.println("NO");
            }
            --t;
        }
        
        sc.close();
    }
}
