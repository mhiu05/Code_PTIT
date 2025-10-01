import java.util.*;

class NhanVien{
    String mnv, hoTen, gt, ns, dc, mst, nk;

    public NhanVien(String mnv, String hoTen, String gt, String ns, String dc, String mst, String nk){
        this.mnv = "00001";
        this.hoTen = hoTen;
        this.gt = gt;
        this.ns = ns;
        this.dc = dc;
        this.mst = mst;
        this.nk = nk;
    }

    @Override
    public String toString(){
        return mnv + " " + hoTen + " " + gt + " " + ns + " " + dc + " " + mst + " " + nk; 
    }
}

public class J04007_Khai_bao_lop_nhan_vien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String mnv = "00001";
        String hoTen = sc.nextLine();
        String gt = sc.nextLine();
        String ns = sc.nextLine();
        String dc = sc.nextLine();
        String mst = sc.nextLine();
        String nk = sc.nextLine();

        NhanVien a = new NhanVien(mnv, hoTen, gt, ns, dc, mst, nk);
        System.out.println(a);

        sc.close();

    }
}
