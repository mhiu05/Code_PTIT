import java.util.*;

public class A{
    static String Add (String a, String b){
        String res = "";

        if(a.length() < b.length()){
            String tmp = a;
            a = b;
            b = tmp;
        }
        
        while(a.length() != b.length()){
            b = "0" + b;
        }

        int n = a.length();
        int carry = 0;
        for(int i = n - 1; i >= 0; --i){
            int x = (a.charAt(i) - '0') + (b.charAt(i) - '0') + carry;
            carry = x / 10;
            res = (char)((x % 10) + '0') + res;
        }
        
        if(carry != 0){
            res = "1" + res;
        }

        return res;
    }

    static String Solve(String s){
        int n = s.length();
        int div = n / 2;
        String s1 = s.substring(0, div);
        String s2 = s.substring(div, n);
        return Add(s1, s2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();

        while(s.length() != 1){
            s = Solve(s);

            while (s.length() > 1 && s.charAt(0) == '0') {
                s = s.substring(1);
            }

            System.out.println(s);
        }
        
        sc.close();
    }
}