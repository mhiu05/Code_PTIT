import java.util.*;
import java.io.*;

class IntSet{
    private TreeSet<Integer> ts;

    public IntSet(int[] a){
        ts = new TreeSet<>();
        for(int num : a){
            ts.add(num);
        }
    }

    public IntSet intersection(IntSet other){
        TreeSet<Integer> se = new TreeSet<>(this.ts);
        se.retainAll(other.ts);
        int[] ans = new int[se.size()];
        int i = 0;
        for(int num : se){
            ans[i++] = num;
        }
        return new IntSet(ans);
    }

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        for(int num : this.ts){
            sb.append(num).append(" ");
        }
        return sb.toString().trim();
    }
}

public class J07009_Lop_INTSET_2{
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.intersection(s2);
        System.out.println(s3);
        sc.close();
    }
}