import java.util.*;

public class J03026_Xau_khac_nhau_dai_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String a = sc.next().strip();
            String b = sc.next().strip();
            if(a.equals(b)){
                System.out.println("-1");
            } else{
                System.out.println(Math.max(a.length(), b.length()));
            }
        }

        sc.close();
    }
}
