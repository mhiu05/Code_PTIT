import java.util.*;

public class J02017_Thu_gon_day_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        Stack<Integer> st = new Stack<>();      
        for(int i = 0; i < n; ++i){
            st.push(sc.nextInt());

            if(st.size() < 2){
                continue;
            }

            int a = st.pop();
            int b = st.pop();
            if((a + b) % 2 == 0){
                continue;
            } else{
                st.push(b);
                st.push(a);
            }
        }

        System.out.println(st.size());
        sc.close();
    }
}
