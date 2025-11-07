import java.util.*;

class Matrix{
    private int n, m;
    private int[][] a;

    public Matrix(int n, int m){
        this.n = n;
        this.m = m;
    }

    public void nextMatrix(Scanner sc){
        this.a = new int[this.n][this.m];
        for(int i = 0; i < this.n; ++i){
            for(int j = 0; j < this.m; ++j){
                this.a[i][j] = sc.nextInt();
            }
        }
    }

    public Matrix trans(){
        int n = this.m, m = this.n;
        Matrix res = new Matrix(n, m);
        res.a = new int[n][m];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                res.a[i][j] = this.a[j][i];
            }
        }
        return res;
    }

    public Matrix mul(Matrix other){
        Matrix res = new Matrix(this.n, other.m);
        res.a = new int[this.n][other.m];
        for(int i = 0; i < this.n; ++i){
            for(int j = 0; j < other.m; ++j){
                int sum = 0;
                for(int k = 0; k < this.m; ++k){
                    sum += this.a[i][k] * other.a[k][j];
                }
                res.a[i][j] = sum;
            }
        }
        return res;
    }

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        for(int i = 0; i < this.n; ++i){
            for(int j = 0; j < this.m; ++j){
                sb.append(a[i][j]);
                if(j != this.m - 1){
                    sb.append(" ");
                }
            }
            sb.append("\n");
        }
        return sb.toString().trim();
    }
}

public class J04017_Tich_ma_tran_va_chuyen_vi_cua_no {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
             int n = sc.nextInt(), m = sc.nextInt();
             Matrix a = new Matrix(n,m);
             a.nextMatrix(sc);
             Matrix b = a.trans();
             System.out.println(a.mul(b));
        }
    }
}
