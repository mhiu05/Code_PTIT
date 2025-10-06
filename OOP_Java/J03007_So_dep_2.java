import java.util.*;

public class J03007_So_dep_2 {
    static Boolean Check(String s){
        if ((s.charAt(0) != '8') || (s.charAt(s.length() - 1) != '8')){
            return false;
        }
        int sum = 0;
        for(int i = 0; i < s.length(); ++i){
            sum += (s.charAt(i) - '0');
            if(s.charAt(i) != s.charAt(s.length() - 1 - i)){
                return false;
            }
        }
        if (sum % 10 != 0){
            return false;
        }
        return true;

    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0){
            String s = sc.next();
            if(Check(s)){
                System.out.println("YES");
            } else{
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
