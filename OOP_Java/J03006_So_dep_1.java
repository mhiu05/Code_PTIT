import java.util.*;

public class J03006_So_dep_1 {
    static boolean Check(String s){
        for(int i = 0; i < s.length(); ++i){
            if((s.charAt(i) - '0') % 2 != 0) return false;
        }

        for(int i = 0; i < s.length(); ++i){
            if(s.charAt(i) != s.charAt(s.length() - i - 1)) return false;
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            if(Check(s)){
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }

        sc.close();
    }
}
