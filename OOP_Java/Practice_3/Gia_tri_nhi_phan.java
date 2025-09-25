package Practice_3;

import java.util.*;
import java.io.*;

public class Gia_tri_nhi_phan {
    
    static String extractBinaryString(String s) {
        StringBuilder binary = new StringBuilder();
        for (char c : s.toCharArray()) {
            if (c == '0' || c == '1') {
                binary.append(c);
            }
        }
        return binary.toString();
    }
    
    static long binaryToDecimal(String binary) {
        if (binary.isEmpty()) return 0L;
        
        long decimal = 0;
        int n = binary.length();
        
        for (int i = 0; i < n; i++) {
            if (binary.charAt(i) == '1') {
                decimal += (1L << (n - 1 - i)); 
            }
        }
        return decimal;
    }

    public static void main(String[] args) {
        try {
            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));
            
            @SuppressWarnings("unchecked")
            ArrayList<String> list = (ArrayList<String>) ois.readObject();
            ois.close();
            
            for (String str : list) {
                if (str != null) {
                    String binaryStr = extractBinaryString(str);
                    
                    long decimalValue = binaryToDecimal(binaryStr);
                    
                    System.out.println(binaryStr + " " + decimalValue);
                }
            }
            
        } catch (Exception e) {
            System.out.println("__");
        } 
    }
}