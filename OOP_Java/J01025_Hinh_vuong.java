import java.util.*;

public class J01025_Hinh_vuong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x1 = sc.nextInt(), y1 = sc.nextInt(), x2 = sc.nextInt(), y2 = sc.nextInt();
        int a1 = sc.nextInt(), b1 = sc.nextInt(), a2 = sc.nextInt(), b2 = sc.nextInt();
        int a = Math.max(a2, x2) - Math.min(a1, x1);
        int b = Math.max(b2, y2) - Math.min(b1, y1);
        int ans = Math.max(a, b);
        System.out.println(ans * ans);
        sc.close();
    }
}
