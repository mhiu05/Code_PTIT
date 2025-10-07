import java.util.*;
import java.math.*; 

public class J03039_Chia_het {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            String s = sc.nextLine();
            String[] words = s.split("\\s+");
            
            BigInteger Biga = new BigInteger(words[0]);
            BigInteger Bigb = new BigInteger(words[1]);

            if(Biga.mod(Bigb).equals(BigInteger.ZERO) || Bigb.mod(Biga).equals(BigInteger.ZERO)){
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        
        sc.close();
    }
}
