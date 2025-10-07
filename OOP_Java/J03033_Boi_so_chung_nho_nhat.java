import java.math.BigInteger;
import java.util.*;

public class J03033_Boi_so_chung_nho_nhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String a = sc.next();
            String b = sc.next();

            BigInteger Biga = new BigInteger(a);
            BigInteger Bigb = new BigInteger(b);

            System.out.println(Biga.multiply(Bigb).divide(Biga.gcd(Bigb)));
        }
        sc.close();
    }
}
