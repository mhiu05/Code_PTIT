import java.util.*;

public class J03040_Bien_so_dep {
    static Boolean Check(char c1, char c2, char c3, char c4, char c5){
        if((c1 == c2 && c2 == c3) && (c4 == c5)){
            return true;
        } 

        if(c1 == c2 && c2 == c3 && c3 == c4 && c4 == c5){
            return true;
        }

        if(c1 < c2 && c2 < c3 && c3 < c4 && c4 < c5){
            return true;
        }

        if((c1 == '6' || c1 == '8') && (c2 == '6' || c2 == '8') && (c3 == '6' || c3 == '8') && (c4 == '6' || c4 == '8') && (c5 == '6' || c5 == '8')){
            return true;
        }

        return false;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String s = sc.next();
            char c1 = s.charAt(5);
            char c2 = s.charAt(6);
            char c3 = s.charAt(7);
            char c4 = s.charAt(9);
            char c5 = s.charAt(10);

            if(Check(c1, c2, c3, c4, c5)){
                System.out.println("YES");
            } else{
                System.out.println("NO");
            }

        }

        sc.close();
    }
}
