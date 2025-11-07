import java.util.*;

class Matrix{
    private int n, m;
    private int[][] a;

    public Matrix(int n, int m){
        this.n = n;
        this.m = m;
    }

    public void nextMatrix(Scanner sc){
        this.a = new int[n][m];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                this.a[i][j] = sc.nextInt();
            }
        }
    }

    public Matrix mul(Matrix other){
        int n = this.n, m = this.m, p = other.m;
        Matrix res = new Matrix(n, p);
        res.a = new int[n][p];
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < p; ++j){
                int sum = 0;
                for(int k = 0; k < m; ++k){
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

public class J04016_Tich_2_doi_tuong_ma_tran {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt(), m = sc.nextInt(), p = sc.nextInt();
        Matrix a = new Matrix(n,m);
        a.nextMatrix(sc);
        Matrix b = new Matrix(m,p);
        b.nextMatrix(sc);
        System.out.println(a.mul(b));
    }
}
