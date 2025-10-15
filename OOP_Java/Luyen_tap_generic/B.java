package Luyen_tap_generic;

import java.util.Scanner;

class Pair<T, U> {
    private T first;
    private U second;

    public Pair(T first, U second) {
        this.first = first;
        this.second = second;
    }

    @Override
    public String toString() {
        return "(" + this.first + "," + this.second + ")";
    }
}

public class B {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        int[][] adjMatrix = new int[n + 1][n + 1];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                adjMatrix[i][j] = sc.nextInt();
            }
        }

        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (adjMatrix[i][j] == 1) {
                    Pair<Integer, Integer> edge = new Pair<>(i, j);
                    System.out.println(edge);
                }
            }
        }
        sc.close();
    }
}