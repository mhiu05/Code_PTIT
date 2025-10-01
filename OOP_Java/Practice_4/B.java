import java.util.*;
import java.io.*;

public class B {
    static void Solve(String s){
        int res1 = 0, res2 = 0;
        for(int i = 0; i < s.length(); ++i){
            res1 = 10*res1 + (s.charAt(i) - '0');
            res1 %= 7;
            res2 = 10*res2 + (s.charAt(i) - '0');
            res2 %= 13;
        }
        res1 %= 7;
        res2 %= 13;
        
        if(res1 == 0 && res2 == 0){
                System.out.println("Both");
            } else if (res1 == 0){
                System.out.println("Div 7");
            } else if(res2 == 0){
                System.out.println("Div 13");
            } else{
                System.out.println("None");
        }
    }
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("SONGUYEN.IN"));

            int t = sc.nextInt();
            while(t-- > 0){
                String s = sc.next();
                Solve(s);
            }

            sc.close();
        } catch (Exception e) {
            System.out.println("____");
        }
    }
}