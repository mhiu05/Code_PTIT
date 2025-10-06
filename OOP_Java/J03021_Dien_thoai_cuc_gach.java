import java.util.*;


public class J03021_Dien_thoai_cuc_gach {
    static Boolean Check(String s){
        for(int i = 0; i < s.length(); ++i){
            if(s.charAt(i) != s.charAt(s.length() - i - 1)){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());

        TreeMap<Character, Integer> mp = new TreeMap<>();
        mp.put('A', 2); mp.put('B', 2); mp.put('C', 2);
        mp.put('D', 3); mp.put('E', 3); mp.put('F', 3);
        mp.put('G', 4); mp.put('H', 4); mp.put('I', 4);
        mp.put('J', 5); mp.put('K', 5); mp.put('L', 5);
        mp.put('M', 6); mp.put('N', 6); mp.put('O', 6);
        mp.put('P', 7); mp.put('Q', 7); mp.put('R', 7); mp.put('S', 7);
        mp.put('T', 8); mp.put('U', 8); mp.put('V', 8);
        mp.put('W', 9); mp.put('X', 9); mp.put('Y', 9); mp.put('Z', 9);

        while(t-- > 0){
            String s = sc.next();
            s = s.toUpperCase();

            String tmp = "";
            for(int i = 0; i < s.length(); ++i){
                tmp += Integer.toString(mp.get(s.charAt(i)));
            }

            if(Check(tmp)){
                System.out.println("YES");
            } else{
                System.out.println("NO");
            }
        }
        sc.close();
    }
}
