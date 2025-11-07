import java.util.*;
import java.math.*;

class Ps{
    private String ts, ms;

    public Ps(){}

    public Ps(String ts, String ms){
        this.ts = ts;
        this.ms = ms;
    }

    @Override
    public String toString(){
        BigInteger bt = new BigInteger(this.ts);
        BigInteger bm = new BigInteger(this.ms);

        BigInteger t = bt.divide(bm.gcd(bt));
        BigInteger m = bm.divide(bm.gcd(bt));
        return t.toString() + "/" + m.toString();
    }
}

public class J04003_Phan_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String ts = sc.next(), ms = sc.next();
        Ps p = new Ps(ts, ms);
        System.out.println(p);

        sc.close();
    }
}
