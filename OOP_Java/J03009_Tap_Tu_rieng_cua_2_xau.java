import java.util.*;

public class J03009_Tap_Tu_rieng_cua_2_xau {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0){
            String s1 = sc.nextLine();
            String s2 = sc.nextLine();
            String[] words1 = s1.split("\\s+");
            String[] words2 = s2.split("\\s+");
            TreeSet<String> se = new TreeSet<>();
            TreeSet<String> result = new TreeSet<>();
            for(String word : words2){
                se.add(word);
            }

            for (String word : words1){
                if(!se.contains(word)){
                    result.add(word);
                    
                }
            }

            for(String word : result){
                System.out.print(word + " ");
            }
            System.out.println();

        }
        sc.close();
    }
}
