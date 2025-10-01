import java.util.*;
import java.io.*;
import java.math.BigInteger;

public class D {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("DATA.in"));

            Set<String> se = new TreeSet<>(); 
            while (sc.hasNext()) {
                String numStr = sc.next(); 
                se.add(numStr);
            }

            BigInteger sum = BigInteger.ZERO;
            BigInteger product = BigInteger.ONE;
            
            for (String numStr : se) {
                BigInteger num = new BigInteger(numStr);
                sum = sum.add(num);
                product = product.multiply(num);
            }

            System.out.println(sum);
            System.out.println(product);

            sc.close();
        } catch (Exception e) {
            System.out.println("____");
        }
    }
}