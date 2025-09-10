package Practice_2;
import java.util.*;
import java.io.*;

class DanhSach{
    String msv, hoTen, Lop, Email, sdt;

    public DanhSach(String msv, String hoTen, String Lop, String Email, String sdt){
        
    }
}

public class C_Danh_sach_lien_lac {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("DANHSACH.in"));
            while(sc.hasNextLine()){
                String msv = sc.nextLine();
                String hoTen = sc.nextLine();
                String Lop = sc.nextLine();
                String Email = sc.nextLine();
                String sdt = sc.nextLine();



            }
            sc.close();
        } catch (FileNotFoundException fNot) {
            fNot.printStackTrace();
        }
    }
}
