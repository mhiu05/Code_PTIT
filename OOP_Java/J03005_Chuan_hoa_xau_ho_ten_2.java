import java.util.*;

public class J03005_Chuan_hoa_xau_ho_ten_2 {
    static String Standard (String s){
        s = s.trim().toLowerCase();
        s = s.replaceAll("\\s+", " ");

        String[] words = s.split(" ");
        StringBuilder sb = new StringBuilder();

        for(int i = 1; i < words.length; ++i){
            sb.append(Character.toUpperCase(words[i].charAt(0)));
            sb.append(words[i].substring(1));
            if(i != words.length - 1) {
                sb.append(" ");
            }
        }
        sb.append(", ");
        sb.append(words[0].toUpperCase());

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
