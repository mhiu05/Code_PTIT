import java.util.*;


public class J03025_Xau_doi_xung {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String s = sc.next();
            int cnt = 0;
            for(int i = 0; i < s.length(); ++i){
                if(s.charAt(i) != s.charAt(s.length() - i - 1)){
                    ++cnt;
                }
            }
            if (cnt > 2 || (cnt == 0 && s.length() % 2 == 0)){
                System.out.println("NO");
            } else{
                System.out.println("YES");
            }
        }

        sc.close();
    }
}
