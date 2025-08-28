import java.util.*;

public class J02005_Giao_cua_2_day_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt();
        
        Set<Integer> setA = new HashSet<>();
        for (int i = 0; i < n; i++) {
            setA.add(sc.nextInt());
        }
        
        Set<Integer> setB = new HashSet<>();
        for (int i = 0; i < m; i++) {
            setB.add(sc.nextInt());
        }
        
        // Tìm giao của hai tập hợp
        setA.retainAll(setB);
        
        // Chuyển sang List và sắp xếp
        List<Integer> result = new ArrayList<>(setA);
        Collections.sort(result);
        
        // In kết quả
        for (int num : result) {
            System.out.print(num + " ");
        }
        
        sc.close();
    }
}