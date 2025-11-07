import java.util.*;

public class C {

    static List<String> resultList = new ArrayList<>();

    static void precomputeNumbers() {
        Queue<String> q = new LinkedList<>();

        q.add("4");
        q.add("5");

        resultList.add("44");
        resultList.add("55");

        while (resultList.size() < 10000) {
            String top = q.poll();

            String s1 = top + "4";
            String s2 = top + "5";

            q.add(s1);
            q.add(s2);

            resultList.add(s1 + new StringBuilder(s1).reverse().toString());
            resultList.add(s2 + new StringBuilder(s2).reverse().toString());
        }
    }

    public static void main(String[] args) {
        precomputeNumbers();

        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); 
        while (t-- > 0) {
            int n = sc.nextInt();

            for (int i = 0; i < n; i++) {
                System.out.print(resultList.get(i) + " ");
            }
            System.out.println(); 
        }

        sc.close();
    }
}