import java.util.*;

public class J03038_Danh_dau_chu_cai {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String s = sc.next();

        int mark[] = new int[100];
        for (int i = 0 ; i < s.length(); ++i){
            mark[s.charAt(i) - 'a'] = 1;
        }

        int cnt = 0;
        for(int i = 0; i <= 99; ++i){
            if(mark[i] != 0){
                ++cnt;
            }
        }

        System.out.println(cnt);

        sc.close();
    }
}
