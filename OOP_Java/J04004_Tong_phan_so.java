import java.util.*;
import java.math.*;

class Ps{
    private String ts, ms;

    public Ps(){}

    public Ps(String ts, String ms){
        this.ts = ts;
        this.ms = ms;
    }

    public Ps add(Ps other){
        Ps res = new Ps();
        BigInteger bt1 = new BigInteger(this.ts);
        BigInteger bm1 = new BigInteger(this.ms);
        BigInteger bt2 = new BigInteger(other.ts);
        BigInteger bm2 = new BigInteger(other.ms);

        BigInteger bt_tmp = bt1.multiply(bm2).add(bt2.multiply(bm1));  
        BigInteger bm_tmp = bm1.multiply(bm2);

        BigInteger bt = bt_tmp.divide(bt_tmp.gcd(bm_tmp));
        BigInteger bm = bm_tmp.divide(bt_tmp.gcd(bm_tmp));

        res.ts = bt.toString();
        res.ms = bm.toString();
        return res;
    }

    @Override
    public String toString(){
        return this.ts + "/" + this.ms;
    }

}

public class J04004_Tong_phan_so {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String ts1 = sc.next(), ms1 = sc.next(), ts2 = sc.next(), ms2 = sc.next();
        Ps p1 = new Ps(ts1, ms1), p2 = new Ps(ts2, ms2);
        Ps ans = p1.add(p2);
        System.out.println(ans);

        sc.close();
    }
}
