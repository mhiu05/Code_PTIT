import java.util.*;

public class J02007_Dem_so_lan_xat_hien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        int test = 1;
        while(t > 0){
            System.out.println("Test " + test + ":");

            Map<Integer, Integer> mp = new LinkedHashMap<>();
            int n = sc.nextInt();
            for(int i = 0; i < n; ++i){
                int x = sc.nextInt();
                if(mp.containsKey(x)){
                    mp.put(x, mp.get(x) + 1);
                } else{
                    mp.put(x, 1);
                }
            }

            for (Map.Entry<Integer, Integer> entry : mp.entrySet()) {
                System.out.println(entry.getKey() + " xuat hien " + entry.getValue() + " lan");
            }

            test++;
            t--;
        }
        sc.close();
    }
}
