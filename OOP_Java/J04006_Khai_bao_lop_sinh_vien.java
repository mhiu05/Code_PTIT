import java.util.*;

class Student{  
    private String msv,hoTen, lop, birthday;
    private double gpa;

    public Student(String hoTen, String lop, String birthday, double gpa) {
        this.msv = "B20DCCN001";
        this.hoTen = hoTen;
        this.lop = lop;
        this.gpa = gpa;
        
        // Standardize birthday
        String[] parts = birthday.split("/");
        String d = parts[0], m = parts[1], y = parts[2];
        if(d.length() == 1) d = "0" + d;
        if(m.length() == 1) m = "0" + m;

        this.birthday = d + "/" + m + "/" + y;
    }

    @Override
    public String toString(){
        return msv + " " + hoTen + " " + lop + " " + birthday + " " + String.format("%.2f", gpa);
    }
}

public class J04006_Khai_bao_lop_sinh_vien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String hoTen = sc.nextLine();
        String lop = sc.nextLine();
        String birthday = sc.nextLine();
        double gpa = sc.nextDouble();

        Student sv = new Student(hoTen, lop, birthday, gpa);
        System.out.println(sv);
        sc.close();
    }
}
