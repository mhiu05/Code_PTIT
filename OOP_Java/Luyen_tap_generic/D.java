package Luyen_tap_generic;
import java.util.*;

public class D {

    public static class WordSet {
        TreeSet<String> a;

        public WordSet() {
            a = new TreeSet<>();
        }

        public WordSet(String s) {
            a = new TreeSet<>();
            String[] words = s.toLowerCase().split("\\s+");
            for (String w : words) {
                a.add(w);
            }
        }

        public WordSet union(WordSet s) {
            WordSet res = new WordSet();
            res.a.addAll(this.a);
            res.a.addAll(s.a);
            return res;
        }

        public WordSet intersection(WordSet s) {
            WordSet res = new WordSet();
            for (String w : this.a) {
                if (s.a.contains(w)) {
                    res.a.add(w);
                }
            }
            return res;
        }

        @Override
        public String toString() {
            StringBuilder res = new StringBuilder();
            for (String w : this.a) {
                res.append(w).append(" ");
            }
            return res.toString().trim();
        }
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
        in.close();
    }
}