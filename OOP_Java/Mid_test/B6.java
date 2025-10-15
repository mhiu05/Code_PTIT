package Mid_test;

import java.io.*;
import java.util.*;

class MonHoc implements Comparable<MonHoc> {
    private String ma, ten, hinhThuc;

    public MonHoc(String ma, String ten, String hinhThuc) {
        this.ma = ma;
        this.ten = ten;
        this.hinhThuc = hinhThuc;
    }

    public String getMa() {
        return ma;
    }

    @Override
    public int compareTo(MonHoc other) {
        return this.ma.compareTo(other.ma);
    }

    @Override
    public String toString() {
        return ma + " " + ten + " " + hinhThuc;
    }
}

public class B6 {
    public static void main(String[] args) {
        ArrayList<MonHoc> ds = new ArrayList<>();
        HashSet<String> maDaCo = new HashSet<>();

        try {
            Scanner sc = new Scanner(new File("MONHOC.in"));
            while (sc.hasNextLine()) {
                String ma = sc.nextLine().trim();
                if (ma.isEmpty()) continue; 

                String ten = sc.nextLine().trim();
                String hinhThuc = sc.nextLine().trim();

                if (!maDaCo.contains(ma)) {
                    ds.add(new MonHoc(ma, ten, hinhThuc));
                    maDaCo.add(ma);
                }
            }
            sc.close();
        } catch (Exception e) {
            System.out.println("Lỗi đọc file: " + e);
        }

        Collections.sort(ds);

        for (MonHoc mh : ds) {
            System.out.println(mh);
        }
    }
}
