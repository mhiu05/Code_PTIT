import java.util.*;

class Rectangle{
    private int w, h;
    private String c;

    public Rectangle(){}

    public Rectangle(int w, int h, String c){
        this.w = w;
        this.h = h;
        this.c = c;
    }

    String getColor(){
        String res  = "";
        for(int i = 0; i < this.c.length() - 1; ++i){
            if(i == 0){
                String tmp = this.c.substring(i, i + 1);
                res += tmp.toUpperCase();
            } else {
                String tmp = this.c.substring(i, i + 1);
                res += tmp.toLowerCase();
            }
        }
        res += this.c.substring(this.c.length() - 1).toLowerCase();
        return res;
    }

    int findAre(){
        return this.w * this.h;
    }

    int findPerimeter(){
        return 2*(this.h + this.w);
    }
}

public class J04002_Khai_bao_lop_HCN{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int w = sc.nextInt(), h = sc.nextInt();
        String c = sc.next();

        if(w <= 0 || h <= 0){
            System.out.println("INVALID");
        } else{
            Rectangle R = new Rectangle(w, h, c);
            System.out.println(R.findPerimeter() + " " + R.findAre() + " " +  R.getColor());
        }

        sc.close();
    }
}