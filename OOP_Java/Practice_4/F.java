import java.util.*;

public class F {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        double[] scores = new double[n];
        
        for (int i = 0; i < n; i++) {
            scores[i] = sc.nextDouble();
        }
        
        double minScore = scores[0];
        double maxScore = scores[0];
        
        for (int i = 1; i < n; i++) {
            if (scores[i] < minScore) {
                minScore = scores[i];
            }
            if (scores[i] > maxScore) {
                maxScore = scores[i];
            }
        }
        
        double sum = 0;
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            if (scores[i] != minScore && scores[i] != maxScore) {
                sum += scores[i];
                count++;
            }
        }
        
        double average = sum / count;
        System.out.printf("%.2f\n", average);
        
        sc.close();
    }
}