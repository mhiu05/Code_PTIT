import java.util.*;
import java.math.*;

public class J03014_Hieu_so_nguyen_lon_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();
        
        BigInteger Biga = new BigInteger(a);
        BigInteger Bigb = new BigInteger(b);
        System.out.println(Biga.subtract(Bigb));
        sc.close();
    }
}
