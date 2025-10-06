import java.util.*;
import java.math.*;

public class J03013_Hieu_so_nguyen_lon_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String a = sc.next();
            String b = sc.next();

            int maxLen = Math.max(a.length(), b.length());

            BigInteger Biga = new BigInteger(a);
            BigInteger Bigb = new BigInteger(b);
            
            BigInteger ans = Biga.subtract(Bigb).abs();
            String result = ans.toString();
            while(result.length() < maxLen){
                result = "0" + result;
            }
            System.out.println(result);
        }
        sc.close();
    }
}
