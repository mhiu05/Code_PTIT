import java.util.*;

public class J03008_So_dep_3 {
    static Boolean Check(String s){
        for(int i = 0; i < s.length(); ++i){
            if(s.charAt(i) != '3' && s.charAt(i) != '5' && s.charAt(i) != '7' && s.charAt(i) != '2'){
                return false;
            }
            if(s.charAt(i) != s.charAt(s.length() - i - 1)){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
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
