import java.util.*;

public class E {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        while (t-- > 0) {
            int n = Integer.parseInt(sc.nextLine());
            
            String s = sc.nextLine();

            Stack<Long> st = new Stack<>();

            String[] words = s.trim().split("\\s+");

            for (int i = words.length - 1; i >= 0; --i) {
                String word = words[i];

                if (word.equals("+") || word.equals("-") || word.equals("*") || word.equals("/")) {
                    long op1 = st.pop();
                    long op2 = st.pop();

                    long result = 0;
                    switch (word) {
                        case "+":
                            result = op1 + op2;
                            break;
                        case "-":
                            result = op1 - op2;
                            break;
                        case "*":
                            result = op1 * op2;
                            break;
                        case "/":
                            if (op2 != 0) {
                                result = op1 / op2;
                            }
                            break;
                    }
                    st.push(result);
                } else {
                    st.push(Long.parseLong(word));
                }
            }

            System.out.println(st.pop());
        }

        sc.close();
    }
}
