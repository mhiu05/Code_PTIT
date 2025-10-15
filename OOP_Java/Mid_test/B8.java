package Mid_test;

import java.io.*;
import java.util.*;
import java.text.*;

class SanPham {
    private String ma, ten;
    private int gia, bh;

    public SanPham(String ma, String ten, int gia, int bh) {
        this.ma = ma;
        this.ten = ten;
        this.gia = gia;
        this.bh = bh;
    }

    public String getMa() {
        return ma;
    }

    public int getGia() {
        return gia;
    }

    public int getBh() {
        return bh;
    }
}

class KhachHang implements Comparable<KhachHang> {
    private String maKH, ten, diaChi, maSP;
    private int soLuong;
    private Date ngayMua;
    private Date ngayHetHan;
    private int tongTien;

    public KhachHang(int id, String ten, String diaChi, String maSP, int soLuong, String ngayMua, Map<String, SanPham> mapSP) throws Exception {
        this.maKH = String.format("KH%02d", id);
        this.ten = ten;
        this.diaChi = diaChi;
        this.maSP = maSP;
        this.soLuong = soLuong;

        SanPham sp = mapSP.get(maSP);
        if (sp != null) {
            this.tongTien = sp.getGia() * soLuong;

            SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
            this.ngayMua = sdf.parse(ngayMua);
            Calendar cal = Calendar.getInstance();
            cal.setTime(this.ngayMua);
            cal.add(Calendar.MONTH, sp.getBh());
            this.ngayHetHan = cal.getTime();
        }
    }

    public Date getNgayHetHan() {
        return ngayHetHan;
    }

    public String getMaKH() {
        return maKH;
    }

    @Override
    public int compareTo(KhachHang other) {
        int cmp = this.ngayHetHan.compareTo(other.ngayHetHan);
        if (cmp == 0) return this.maKH.compareTo(other.maKH);
        return cmp;
    }

    @Override
    public String toString() {
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        return maKH + " " + ten + " " + diaChi + " " + maSP + " " + tongTien + " " + sdf.format(ngayHetHan);
    }
}

public class B8 {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("MUAHANG.in"));
            int n = Integer.parseInt(sc.nextLine().trim());
            Map<String, SanPham> mapSP = new HashMap<>();

            for (int i = 0; i < n; i++) {
                String ma = sc.nextLine().trim();
                String ten = sc.nextLine().trim();
                int gia = Integer.parseInt(sc.nextLine().trim());
                int bh = Integer.parseInt(sc.nextLine().trim());
                mapSP.put(ma, new SanPham(ma, ten, gia, bh));
            }

            int m = Integer.parseInt(sc.nextLine().trim());
            ArrayList<KhachHang> ds = new ArrayList<>();

            for (int i = 1; i <= m; i++) {
                String ten = sc.nextLine().trim();
                String diaChi = sc.nextLine().trim();
                String maSP = sc.nextLine().trim();
                int soLuong = Integer.parseInt(sc.nextLine().trim());
                String ngayMua = sc.nextLine().trim();

                ds.add(new KhachHang(i, ten, diaChi, maSP, soLuong, ngayMua, mapSP));
            }

            Collections.sort(ds);

            for (KhachHang kh : ds) {
                System.out.println(kh);
            }

            sc.close();
        } catch (Exception e) {
            System.out.println("Lỗi: " + e);
        }
    }
}
