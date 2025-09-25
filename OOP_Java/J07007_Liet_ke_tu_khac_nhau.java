import java.util.*;
import java.io.*;

public class J07007_Liet_ke_tu_khac_nhau {
    static String Convert(String s){
        String res = "";
        for(int i = 0; i < s.length(); ++i){
            res += (s.substring(i, i + 1).toLowerCase());
        }
        return res;
    }

    public static void main(String[] args) {
        try{
            Scanner sc = new Scanner(new File("VANBAN.in"));
            Map<String, Integer> mp = new TreeMap<>();

            while(sc.hasNext()){
                String s = sc.next();
                String tmp = Convert(s);
                mp.put(tmp, mp.getOrDefault(tmp, 0) + 1);
            }

            for(Map.Entry<String, Integer> it : mp.entrySet()){
                System.out.println(it.getKey());
            }

            sc.close();
        } catch(Exception e){
            System.out.println("couldn't found the file");
        }
    }
}
