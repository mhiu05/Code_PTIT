import java.util.*;

public class J03010_Dia_chi_email {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        TreeMap<String, Integer> mp = new TreeMap<>();

        int n = Integer.parseInt(sc.nextLine());
        while(n-- > 0){
            String s1 = sc.nextLine().trim();
            String[] w = s1.split("\\s+");

            for(int i = 0; i < w.length; ++i){
                w[i] = w[i].toLowerCase();
            }

            String email = w[w.length - 1];
            for(int i = 0; i < w.length - 1; ++i){
                email += w[i].charAt(0);
            }
            
            if(mp.containsKey(email)){
                mp.put(email, mp.get(email) + 1);
                email += Integer.toString(mp.get(email));
             } else{
                mp.put(email, 1);
            }
            email += "@ptit.edu.vn";
            
            System.out.println(email);

        }
        sc.close();
    }
}
