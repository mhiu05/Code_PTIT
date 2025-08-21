import java.util.*;

public class J01010_Cat_doi{
    static void Solve(long n){
        // tạo array để lưu các chữ số của n
        ArrayList<Integer> v = new ArrayList<>(); 

        boolean ok = true; // Check invalid

        while (n > 0) {
            int a = (int)(n % 10);
            if(a != 0 && a != 1 && a != 8 && a != 9) {
                ok = false;
                break;
            }
            if(a == 8 || a == 9) a = 0;
            v.add(a);
            n /= 10; 
        }   
        
        Collections.reverse(v);

        // check only zero
        while(v.size() > 0){
            if(v.get(0) == 0){
                v.remove(0);
            } else {
                break;
            }
        }
        if(v.size() == 0) ok = false;

        if(ok == false){ 
            System.out.println("INVALID");
        } else{
            for(int i = 0; i < v.size(); ++i){
                System.out.print(v.get(i));
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t > 0){
            long n = sc.nextLong();
            Solve(n);
            t--;
        }

        sc.close();
    }
}