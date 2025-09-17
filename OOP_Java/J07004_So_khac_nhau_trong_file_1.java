import java.util.*;
import java.io.*;

public class J07004_So_khac_nhau_trong_file_1 {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("DATA.in"));
            Map<Integer, Integer> mp = new TreeMap<>();

            while(sc.hasNextInt()){
                int x = sc.nextInt();
                mp.put(x, mp.getOrDefault(x, 0) + 1);
            }
            
            for(Map.Entry<Integer, Integer> it : mp.entrySet()){
                System.out.print(it.getKey() + " " + it.getValue());
                System.out.println();
            }
            sc.close();
        } catch (Exception e) {
            System.out.println("Couldn't found the file");
        }
    }
}
