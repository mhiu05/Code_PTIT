import java.util.*;

public class G {
    public static boolean Check(String s) {
        for (int i = 0; i < s.length() - 1; i++) {
            if (s.charAt(i) > s.charAt(i + 1)) {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Map<String, Integer> counts = new LinkedHashMap<>();

        while (sc.hasNext()) {
            String numberStr = sc.next();

            if (Check(numberStr)) {
                counts.put(numberStr, counts.getOrDefault(numberStr, 0) + 1);
            }
        }

        List<Map.Entry<String, Integer>> entryList = new ArrayList<>(counts.entrySet());

        entryList.sort((o1, o2) -> o2.getValue().compareTo(o1.getValue()));

        for (Map.Entry<String, Integer> entry : entryList) {
            System.out.println(entry.getKey() + " " + entry.getValue());
        }

        sc.close();
    }
}