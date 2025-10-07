import java.util.*;

class Point{
    double x, y;

    Point(double x, double y){
        this.x = x;
        this.y = y;
    }

    double getX(){
        return this.x;
    }
    double getY(){
        return this.y;
    }

    double distance(Point other){
        return Math.sqrt((x - other.x) * (x - other.x) + (y - other.y) * (y - other.y));
    }
}

public class J04001_Khai_bao_lop_Point {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        while(t-- > 0){
            double x1 = sc.nextDouble();
            double y1 = sc.nextDouble();
            double x2 = sc.nextDouble();
            double y2 = sc.nextDouble();

            Point p1 = new Point(x1, y1);
            Point p2 = new Point(x2, y2);

            System.out.printf("%.4f", p1.distance(p2));
            System.out.println();
        }

        sc.close();
    }
}
