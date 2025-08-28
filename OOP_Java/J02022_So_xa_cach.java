import java.util.*;

public class J02022_So_xa_cach {
    static int[] a = new int[11];
    static int n;
    static boolean[] vs = new boolean[11];

    static boolean Check(){
        for(int i = 2; i <= n; ++i){
            if(Math.abs(a[i] - a[i - 1]) == 1){
                return false;
            }
        }
        return true;
    }

    static void Try(int j){
        for(int i = 1; i <= n; ++i){
            if(!vs[i]){
                a[j] = i;
                vs[i] = true;
                if(j == n){
                    if(Check()){
                        for(int h = 1; h <= n; ++h){
                            System.out.print(a[h]);
                        }
                        System.out.println();
                    }
                } else{
                    Try(j + 1);
                }
                vs[i] = false;
            }
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            n = sc.nextInt();
            for(int i = 1; i <= n; ++i){
                vs[i] = false;
            }
            Try(1);
        }
        sc.close();
    }
}
