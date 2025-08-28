import java.util.*;

public class J02034_Bo_sung_day_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<Integer, Integer> mp = new HashMap<>();
        int max_val = 0;
        for(int i = 0; i < n; ++i){
            int x = sc.nextInt();
            mp.put(x, 1);
            max_val = x;
        }

        boolean check = false;
        for(int i = 1; i <= max_val; ++i){
            if(!mp.containsKey(i)){
                System.out.println(i);
                check = true;
            }
        }

        if(!check){
            System.out.println("Excellent!");
        }
        sc.close();
    }
}
