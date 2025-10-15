package Mid_test;

import java.io.*;
import java.util.*;

public class B4 {
    public static void main(String[] args) {
        try{
            ObjectInputStream ois1 = new ObjectInputStream(new FileInputStream("DATA1.in"));
            ArrayList<String> list1 = (ArrayList<String>) ois1.readObject();
            ois1.close();

            ObjectInputStream ois2 = new ObjectInputStream(new FileInputStream("DATA2.in"));
            ArrayList<Integer> list2 = (ArrayList<Integer>) ois2.readObject();
            ois2.close();

            TreeSet<String> uniqueStrings = new TreeSet<>(list1);
            
            TreeSet<Integer> uniqueIntegers = new TreeSet<>();
            for(Integer num : list2) {
                uniqueIntegers.add(num);
            }

            Set<String> resultSet = new TreeSet<>();

            for(String str : uniqueStrings){
                for (Integer num : uniqueIntegers){
                    String formattedNum = String.format("%d", num);
                    resultSet.add(str + formattedNum);
                }
            }

            for (String code : resultSet){
                System.out.println(code);
            }
        } catch(Exception e){
        }
    }
}