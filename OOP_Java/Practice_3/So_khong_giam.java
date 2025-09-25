package Practice_3;

import java.util.*;
import java.io.*;

public class So_khong_giam {
    
    static boolean Check(int n) {
        if (n < 10) return false; 
        
        String s = String.valueOf(n);
        for (int i = 0; i < s.length() - 1; i++) {
            if (s.charAt(i) > s.charAt(i + 1)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        try {
            ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
            @SuppressWarnings("unchecked")
            ArrayList<Integer> list1 = (ArrayList<Integer>) ois1.readObject();
            ois1.close();
            
            ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
            @SuppressWarnings("unchecked")
            ArrayList<Integer> list2 = (ArrayList<Integer>) ois2.readObject();
            ois2.close();
            
            Map<Integer, Integer> count1 = new HashMap<>();
            Map<Integer, Integer> count2 = new HashMap<>();
            
            TreeSet<Integer> commonNumbers = new TreeSet<>();
            
            for (Integer num : list1) {
                if (Check(num)) {
                    count1.put(num, count1.getOrDefault(num, 0) + 1);
                }
            }
            
            for (Integer num : list2) {
                if (Check(num)) {
                    count2.put(num, count2.getOrDefault(num, 0) + 1);
                    
                    if (count1.containsKey(num)) {
                        commonNumbers.add(num);
                    }
                }
            }
            
            for (Integer num : commonNumbers) {
                System.out.println(num + " " + count1.get(num) + " " + count2.get(num));
            }
            
        } catch (Exception e) {
            System.out.println("____");
        } 
    }
}