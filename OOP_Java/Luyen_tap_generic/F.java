package Luyen_tap_generic;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.TreeSet;
import java.util.Arrays;

class WordSet {
    private TreeSet<String> words;

    public WordSet(String line) {
        this.words = new TreeSet<>();
        String[] tokens = line.toLowerCase().split("\\s+");
        this.words.addAll(Arrays.asList(tokens));
    }

    private WordSet(TreeSet<String> words) {
        this.words = words;
    }

    public WordSet union(WordSet other) {
        TreeSet<String> unionSet = new TreeSet<>(this.words);
        unionSet.addAll(other.words);
        return new WordSet(unionSet);
    }

    public WordSet intersection(WordSet other) {
        TreeSet<String> intersectionSet = new TreeSet<>(this.words);
        intersectionSet.retainAll(other.words);
        return new WordSet(intersectionSet);
    }

    @Override
    public String toString() {
        return String.join(" ", this.words);
    }
}

public class F {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("VANBAN.in"));
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
        in.close();
    }
}