package Practice_2;
import java.util.*;
import java.io.*;

public class B_Dia_chi_email {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("DANHSACH.in"));
            int t = Integer.parseInt(sc.nextLine());
            List<String> emails = new ArrayList<>();
            Map<String, Integer> emailCount = new HashMap<>();
            
            while(t-- > 0) {
                String s = sc.nextLine();
                s = s.trim().toLowerCase();
                s = s.replaceAll("\\s+", " ");
                
                String[] words = s.split(" ");
                
                if (words.length == 0) continue;
                
                StringBuilder email = new StringBuilder();
                
                email.append(words[words.length - 1]);
                
                for(int i = 0; i < words.length - 1; i++) {
                    if(!words[i].isEmpty()) {
                        email.append(words[i].charAt(0));
                    }
                }
                
                String baseEmail = email.toString();
                
                int count = emailCount.getOrDefault(baseEmail, 0) + 1;
                emailCount.put(baseEmail, count);
                
                if (count > 1) {
                    email.append(count);
                }
                
                email.append("@ptit.edu.vn");
                emails.add(email.toString());
            }
            
            // In ra tất cả các email
            for (String email : emails) {
                System.out.println(email);
            }
            
            sc.close();
        } catch(FileNotFoundException fNot) {
            fNot.printStackTrace();
        }
    }
}