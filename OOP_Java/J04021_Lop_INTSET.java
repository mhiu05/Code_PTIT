import java.util.*;

class IntSet {
    private int[] a;

    public IntSet(int[] x){
        TreeSet<Integer> tempSet = new TreeSet<>();
        for (int num : x){
            tempSet.add(num);
        }

        this.a = new int[tempSet.size()];
        int i = 0;
        for(int num : tempSet){
            a[i++] = num;
        }
    }

    public IntSet union(IntSet other){
        TreeSet<Integer> se1 = new TreeSet<>();
        for(int num : this.a){
            se1.add(num);
        }
        for(int num : other.a){
            se1.add(num);
        }

        int[] arr = new int[se1.size()];
        int i = 0;
        for(int num : se1){
            arr[i++] = num;
        }

        return new IntSet(arr);
    }

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < this.a.length; ++i){
            sb.append((this.a[i]));
            if(i < this.a.length - 1){
                sb.append(" ");
            }
        }
        return sb.toString();
    }
}

public class J04021_Lop_INTSET {
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