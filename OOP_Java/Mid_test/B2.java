package Mid_test;
import java.util.*;
import java.math.*;
import java.io.*;

public class B2 {
    public static void main(String[] args) {
        File file = new File("DAYSO.in");
        
        if (!file.exists()) {
            System.out.println("____");
            return;
        }
        
        try (Scanner sc = new Scanner(file)) {
            int n = Integer.parseInt(sc.nextLine());

            BigInteger firstNum = new BigInteger(sc.nextLine());
            BigInteger max_val = firstNum;
            BigInteger sum = firstNum;
            BigInteger min_val = firstNum;

            for(int i = 2; i <= n; ++i){
                String a = sc.nextLine();
                BigInteger num = new BigInteger(a);

                if(num.compareTo(min_val) < 0){
                    min_val = num;
                }
                
                if(num.compareTo(max_val) > 0){
                    max_val = num;
                }

                sum = sum.add(num);
            }

            System.out.println(min_val);
            System.out.println(max_val);
            System.out.println(sum);
            
        } catch(Exception e) {
            System.out.println("Lỗi");
        }
    }
}