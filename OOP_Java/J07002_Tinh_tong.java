import java.util.*;
import java.io.*;

public class J07002_Tinh_tong {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("DATA.in"));
            long sum = 0;

            while(sc.hasNext()){
                String s = sc.next();
                try {
                    int num = Integer.parseInt(s);
                    sum += num;
                } catch (Exception e) {
                    continue;
                }
            }

            System.out.println(sum);
            sc.close();
        } catch (FileNotFoundException fNot) {
            System.out.println("Could not found the file");
        }
    }
}
