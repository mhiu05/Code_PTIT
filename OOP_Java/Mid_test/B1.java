package Mid_test;

import java.util.*;
import java.io.*;

public class B1 {  


    public static boolean check(int n){
        if (n < 10){
            return false;
        }
        String s = String.valueOf(n);
        for(int i = 1; i < s.length(); ++i){
            if(s.charAt(i) < s.charAt(i - 1)){
                return false;
            }
        }
        return true;
    }

    public static Map<Integer, Integer> dem(String f){
        Map<Integer, Integer> count = new HashMap<>();
        try{
            ObjectInputStream ois = new ObjectInputStream(new FileInputStream(f));
            ArrayList<Integer> list = (ArrayList<Integer>) ois.readObject();
            for(Integer num : list){
                if(check(num)){
                    count.put(num, count.getOrDefault(num, 0) + 1);
                }
            }
            ois.close();
        } catch (Exception e){

        }
        return count;
    }

    public static void main(String[] args) {
        Map<Integer, Integer> mp1 = dem("DATA1.in");
        Map<Integer, Integer> mp2 = dem("DATA2.in");

        TreeSet<Integer> result = new TreeSet<>();
        for (Integer key : mp1.keySet()){
            if(mp2.containsKey(key)){
                result.add(key);
            }
        }

        for(Integer key : result){
            System.out.println(key + " " + mp1.get(key) + " " + mp2.get(key));
        }
    }    
}
