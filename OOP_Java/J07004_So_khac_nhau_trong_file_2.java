import java.util.*;
import java.io.*;

public class J07004_So_khac_nhau_trong_file_2 {
    static int Convert(String s){
        int res = 0;
        for(int i = 0; i < s.length(); ++i){
            res = 2 * res + (s.charAt(i) - '0');
        }
        return res;
    }
    public static void main(String[] args) {
        try {
            DataInputStream dis = new DataInputStream(new FileInputStream("DATA.IN"));
            Map<Integer, Integer> mp = new TreeMap<>();

            for(int i = 1; i <= 100000; ++i){
                try {
                    int x = dis.readInt();
                    mp.put(x, mp.getOrDefault(x, 0) + 1);
                } catch (Exception e) {
                    break;
                }
            }

            for(Map.Entry<Integer, Integer> it : mp.entrySet()){
                System.out.print(it.getKey() + " " + it.getValue());
                System.out.println();
            }
            dis.close();
        } catch (Exception e) {
            System.out.println("Couldn't found the file");
        }
    }
}