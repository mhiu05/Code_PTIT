package Practice_3;
import java.util.*;
import java.io.*;

public class Doc_file_nhi_phan_2 {
    
    static boolean Check(int n) {
        if (n < 100) return false;
        
        int N = n;
        int res = 0;
        
        while (n != 0) {
            res = res * 10 + n % 10;
            n /= 10;
        }
        
        return N == res;
    }

    public static void main(String[] args) {
        try {
            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DAYSO.DAT"));
            
            @SuppressWarnings("unchecked")
            ArrayList<Integer> list = (ArrayList<Integer>) ois.readObject();
            
            ois.close();
            
            TreeSet<Integer> se = new TreeSet<>();
            
            for (Integer num : list) {
                if (Check(num)) {
                    se.add(num);
                }
            }
            
            for (Integer x : se) {
                System.out.println(x);
            }
            
        } catch (Exception e) {
            System.out.println("___");
        } 
    }
}