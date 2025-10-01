import java.util.*;
import java.io.*;

public class E {
    public static void main(String[] args) {
        try {
            FileInputStream fis = new FileInputStream("DATA.in");
            ObjectInputStream ois = new ObjectInputStream(fis);
            
            ArrayList<String> list = (ArrayList<String>) ois.readObject();
            
            ois.close();
            fis.close();
            
            TreeSet<Integer> numbers = new TreeSet<>();
            
            for (String line : list) {
                String[] tokens = line.split("\\s+");
                
                for (String token : tokens) {
                    if (token.isEmpty()) continue;
                    
                    try {
                        int num = Integer.parseInt(token);
                        numbers.add(num);
                    } catch (Exception e) {
                    }
                }
            }
            
            for (int num : numbers) {
                System.out.println(num);
            }
            
        } catch (Exception e) {

        }
    }
}