import java.util.*;

public class J01018_So_khong_lien_ke {
    static boolean Check(String s){
        int sum = s.charAt(0) - '0';
        for(int i = 1; i < s.length(); ++i){
            sum += (s.charAt(i) - '0');
            if(Math.abs(s.charAt(i) - s.charAt(i - 1)) != 2){
                return false;
            }
        }
        if(sum % 10 == 0) return true;
        return false;
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
