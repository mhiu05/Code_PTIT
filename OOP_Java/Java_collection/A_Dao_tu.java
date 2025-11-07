import java.util.*;

public class A_Dao_tu {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String s = sc.nextLine();

            String[] words = s.split("\\s+");

            Stack<String> st = new Stack<>();
            for(String tmp : words){
                if (!tmp.isEmpty()) { 
                    st.push(tmp);
                }
            }
            while(!st.isEmpty()){
                System.out.print(st.pop());
                if (!st.isEmpty()) {
                    System.out.print(" ");
                }
            }

            System.out.println();
        }

        sc.close();
    }
}
