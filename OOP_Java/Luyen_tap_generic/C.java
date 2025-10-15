package Luyen_tap_generic;

import java.util.*;

class IntSet{
    private Set<Integer> se = new TreeSet<>();

    public IntSet(int[] arr){
        for (int x : arr) this.se.add(x);
    }

    public IntSet union(IntSet other){
        this.se.addAll(other.se);
        return this;
    }

    @Override
    public String toString(){
        String ans = "";
        for (Integer x : se){
            ans += x.toString() + " ";
        }
        return ans;
    }
}

public class C {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), a[] = new int[n], b[] = new int[m];
        for(int i = 0; i<n; i++) a[i] = sc.nextInt();
        for(int i = 0; i<m; i++) b[i] = sc.nextInt();
        IntSet s1 = new IntSet(a);
        IntSet s2 = new IntSet(b);
        IntSet s3 = s1.union(s2);
        System.out.println(s3);
        sc.close();
    }
}