import java.util.*;

public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        
        while(t-- > 0){
            String s = sc.nextLine();
            Stack<Integer> st = new Stack<>(); 
            
            int delta = 0; 
            
            StringBuilder result = new StringBuilder(); 
            
            for(int i = 0; i < s.length(); ++i){
                char c = s.charAt(i);
                
                if(c == '('){
                    delta++; 
                    st.push(delta); 
                    result.append(delta).append(" "); 
                    
                } else if (c == ')'){
                    int x = st.pop(); 
                    result.append(x).append(" "); 
                }
            }
            
            if (result.length() > 0) {
                result.setLength(result.length() - 1);
            }
            System.out.println(result.toString());
        }
        
        sc.close();
    }
}