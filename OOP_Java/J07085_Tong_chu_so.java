// package J07085_TONG_CHU_SO;

import java.io.*;
import java.util.*;
import java.math.*;

public class J07085_Tong_chu_so {
    @SuppressWarnings("unchecked")
    public static void main(String[] args) {
        try {
            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("DATA.in"));

            ArrayList<String> list = (ArrayList<String>)ois.readObject();
            for(String s : list){
                StringBuilder sb = new StringBuilder();
                for(char c : s.toCharArray()){
                    if(Character.isDigit(c)){
                        sb.append(c);
                    }
                }

                String numStr = sb.toString();

                BigInteger num = new BigInteger(numStr);
                int tcs = 0;
                for(char c : numStr.toCharArray()){
                    tcs += (c - '0');
                }

                System.out.println(num + " " + tcs) ;
            }

            ois.close();

        } catch (Exception e) {}
    }
}
