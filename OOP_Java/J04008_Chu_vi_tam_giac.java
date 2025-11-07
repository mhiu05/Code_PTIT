import java.util.*;

class Triangle{
    private double a, b, c;

    public Triangle(){}

    public Triangle(double a, double b, double c){
        this.a = a;
        this.b = b;
        this.c = c;
    }

    @Override
    public String toString(){
        return String.valueOf(a + b + c);
    }
}

public class J04008_Chu_vi_tam_giac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            double x1 = sc.nextDouble(), y1 = sc.nextDouble(), x2 = sc.nextDouble(), y2 = sc.nextDouble(), x3 = sc.nextDouble(), y3 = sc.nextDouble();
            
            double a = Math.abs(y1 - x1), b = Math.abs(y2 - x2), c = Math.abs(y3 - x3);
            
            if(a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a){
                System.out.println("INVALID");
            } else {
                Triangle tri = new Triangle(a, b, c);
                System.out.println(tri);
            }

        } 

        sc.close();
    }
}
