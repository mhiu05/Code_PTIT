import java.util.*;

public class J03032_Dao_tu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String s = sc.nextLine();

            String[] words = s.split("\\s+");

            for(String word : words){
                for(int i = word.length() - 1; i >= 0; --i){
                    System.out.print(word.charAt(i));
                }
                System.out.print(" ");
            }
            System.out.println();
        }

        sc.close();
    }
}
