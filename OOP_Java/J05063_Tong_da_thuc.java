import java.util.*;

class DaThuc{
    private TreeMap<Integer, Integer> tm;

    public DaThuc(String s){

    }
}

public class J05063_Tong_da_thuc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            DaThuc p = new DaThuc(sc.nextLine());
            DaThuc q = new DaThuc(sc.nextLine());
            DaThuc r = p.cong(q);
            System.out.println(r);
        }
    }
}
