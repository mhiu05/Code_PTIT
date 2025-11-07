import java.util.*;

public class D {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        while (n-- > 0) {
            int N = sc.nextInt();
            int[] a = new int[N];
            for (int i = 0; i < N; i++) {
                a[i] = sc.nextInt();
            }
            LinkedHashMap<Integer, Integer> freq = new LinkedHashMap<>();
            for (int x : a) {
                freq.put(x, freq.getOrDefault(x, 0) + 1);
            }

            List<Map.Entry<Integer, Integer>> list = new ArrayList<>(freq.entrySet());
            list.sort((x, b) -> b.getValue().compareTo(x.getValue()));
            StringBuilder sb = new StringBuilder();
            for (Map.Entry<Integer, Integer> e : list) {
                for (int i = 0; i < e.getValue(); i++) {
                    System.out.print(e.getKey() + " ");
                }
            }
            System.out.println();
        }
        sc.close();
    }
}