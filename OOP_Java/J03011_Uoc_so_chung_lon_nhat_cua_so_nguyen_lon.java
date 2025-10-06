import java.util.*;
import java.math.*;

public class J03011_Uoc_so_chung_lon_nhat_cua_so_nguyen_lon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String a = sc.next();
            String b = sc.next();

            BigInteger Biga = new BigInteger(a);
            BigInteger Bigb = new BigInteger(b);

            System.out.println(Biga.gcd(Bigb));
        }
        sc.close();
    }
}
