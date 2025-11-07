import java.util.Scanner;

class Pair<T, U>{
    private T first;
    private U second;

    public Pair (T first, U second){
        this.first = first;
        this.second = second;
    }

    public boolean checkSnt(int n){
        for(int i = 2; i <= (int)Math.sqrt(n); ++i){
            if(n % i == 0){
                return false;
            }
        }
        return n > 1;
    }

    public boolean isPrime(){
        if(checkSnt((Integer)this.first) && checkSnt((Integer)this.second)){
            return true;
        } else{
            return false;
        }
    }

    @Override
    public String toString(){
        return this.first + " " + this.second;
    }
}

public class J04020_Lop_Pair {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            boolean check = false;
            for(int i = 2; i <= 2*Math.sqrt(n); i++){
                Pair<Integer, Integer> p = new Pair<>(i, n-i);
                if(p.isPrime()){
                    System.out.println(p);
                    check = true;
                    break; 
                }
            }
            if(!check) System.out.println(-1);
        }
        sc.close();
    }
}
