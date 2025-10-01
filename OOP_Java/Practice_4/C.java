import java.util.*;

public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();

            Set<Integer> se1 = new TreeSet<>(); 
            Set<Integer> se2 = new TreeSet<>(Collections.reverseOrder()); 
            for(int i = 0; i < n; i++){
                int x = sc.nextInt();
                if(x % 2 == 0){
                    se1.add(x);
                } else{
                    se2.add(x);
                }
            }

            int count = 0;
            for (int x : se1) {
                if (count++ > 0) System.out.print(" ");
                System.out.print(x);
            }
            System.out.println();

            count = 0;
            for(int x : se2){
                if (count++ > 0) System.out.print(" ");
                System.out.print(x);
            }
            System.out.println();
        }

        sc.close();
    }
}