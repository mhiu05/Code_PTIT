import java.util.*;

public class J01017_So_lien_ke {
    static boolean Check(String s){
        for(int i = 1; i < s.length(); ++i){
            if(Math.abs(s.charAt(i) - s.charAt(i - 1)) != 1){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
            String s = sc.next();
            if(Check(s)){
                System.out.println("YES");
            } else{
                System.out.println("NO");
            }
            t--;
        }
        sc.close();
    }
}
