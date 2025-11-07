import java.util.*;

class WordSet{
    private TreeSet<String> se;
    
    public WordSet(String s){
        this.se = new TreeSet<>();
        String[] words = s.trim().toLowerCase().split("\\s+");
        for(String w : words){
            this.se.add(w);
        }
    }

    public WordSet union(WordSet other){
        TreeSet<String> se1 = new TreeSet<>();
        se1.addAll(this.se);
        se1.addAll(other.se);
        StringBuilder sb = new StringBuilder();
        for(String w : se1){
            sb.append(w);
            sb.append(" ");
        }
        return new WordSet(sb.toString().trim());
    }

    public WordSet intersection(WordSet other){
        StringBuilder sb = new StringBuilder();
        TreeSet<String> se1 = new TreeSet<>();
        se1.addAll(this.se);
        for(String w : other.se){
            if(se1.contains(w)){
                sb.append(w);
                sb.append(" ");
            }
        }
        String result = sb.toString().trim();
        return new WordSet(result);
    }

    @Override
    public String toString(){
        ArrayList<String> list = new ArrayList<>(this.se);
        return String.join(" ", list);
    }
}

public class J04022_WordSet {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        WordSet s1 = new WordSet(in.nextLine());
        WordSet s2 = new WordSet(in.nextLine());
        System.out.println(s1.union(s2));
        System.out.println(s1.intersection(s2));
        in.close();
    }
}