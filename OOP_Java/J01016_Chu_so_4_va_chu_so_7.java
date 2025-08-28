import java.util.*;

public class J01016_Chu_so_4_va_chu_so_7 {
    static String Solve(String s){
        int cnt = 0;
        for(int i = 0; i < s.length(); ++i){
            if(s.charAt(i) == '4' || s.charAt(i) == '7'){
                ++cnt;
            }
        }
        if(cnt == 4 || cnt == 7){
             return "YES";
        } else {
            return "NO";
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println(Solve(s));
        sc.close();
    }
}
