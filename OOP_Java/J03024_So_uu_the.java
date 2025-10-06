import java.util.*;

public class J03024_So_uu_the {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String s = sc.next();

            Boolean check = true;
            for(int i = 0; i < s.length(); ++i){
                if(!(s.charAt(i) >= '0' && s.charAt(i) <= '9')){
                    check = false;
                    break;
                }
            }
            if(s.charAt(0) == '0' || !check){
                System.out.println("INVALID");
                continue;
            }

            int cnt_odd = 0, cnt_even = 0;
            for(int i = 0; i < s.length(); ++i){
                if(s.charAt(i) % 2 == 0){
                    ++cnt_even;
                } else{
                    ++cnt_odd;
                }
            }

            if((s.length() % 2 == 0 && cnt_even > cnt_odd) || (s.length() % 2 == 1 && cnt_even < cnt_odd)){
                System.out.println("YES");
            } else{
                System.out.println("NO");
            }

            
        }

        sc.close();
    }
}
