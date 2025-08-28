import java.util.*;

public class J02006_Hop_cua_2_day_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        Set<Integer> se = new TreeSet<>();
        for(int i = 0; i < n; ++i){
            se.add(sc.nextInt());
        }
        for(int i = 0; i < m; ++i){
            se.add(sc.nextInt());
        }
        for(int x : se){
            System.out.print(x + " ");
        }
        sc.close();
    }
}
