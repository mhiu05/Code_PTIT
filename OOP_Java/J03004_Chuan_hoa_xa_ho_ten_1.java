import java.util.*;

public class J03004_Chuan_hoa_xa_ho_ten_1 {

    static String Standard(String s) {
        s = s.trim().toLowerCase();
        s = s.replaceAll("\\s+", " ");
        
        String[] words = s.split(" ");
        StringBuilder sb = new StringBuilder();
        
        for (String word : words) {
            sb.append(Character.toUpperCase(word.charAt(0)));
            sb.append(word.substring(1));
            sb.append(" ");
        }
        
        return sb.toString();
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){
            String s = sc.nextLine();
            s = Standard(s);
            System.out.println(s);
        }
        sc.close();
    }
}
