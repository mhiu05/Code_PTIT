import java.util.*;

class ThiSinh{
    String hoTen, ns;
    double d1, d2, d3;

    public ThiSinh(String hoTen, String ns, double d1, double d2, double d3){
        this.hoTen = hoTen;
        this.ns = ns;
        this.d1 = d1;
        this.d2 = d2;
        this.d3 = d3;
    }

    @Override
    public String toString(){
        return hoTen + " " + ns + " " + String.format("%.1f", (d1 + d2 + d3));
    }
}

public class J04005_Khai_bao_lop_thi_sinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String hoTen = sc.nextLine();
        String ns = sc.next();
        double d1 = sc.nextDouble();
        double d2 = sc.nextDouble();
        double d3 = sc.nextDouble();

        ThiSinh a = new ThiSinh(hoTen, ns, d1, d2, d3);
        System.out.println(a);

        sc.close();
    }
}
