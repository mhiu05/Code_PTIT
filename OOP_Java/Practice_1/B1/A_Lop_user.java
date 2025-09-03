package Practice_1.B1;

import java.util.ArrayList;
import java.util.Scanner;

public class A_Lop_user {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int N = scanner.nextInt();
        ArrayList<User> users = new ArrayList<>();
        
        for (int i = 0; i < N; i++) {
            String username = scanner.next();
            String password = scanner.next();
            users.add(new User(username, password));
        }
        
        int M = scanner.nextInt();
        int[] user_cnt = new int[N]; 
        
        for (int i = 0; i < M; i++) {
            String _Username = scanner.next();
            String _Password = scanner.next();
            
            for (int j = 0; j < N; j++) {
                User currentUser = users.get(j);
                if (currentUser.getUsername().equals(_Username) && currentUser.getPassword().equals(_Password)) {
                    user_cnt[j]++;
                    break;
                }
            }
        }
        
        for (int i = 0; i < N; i++) {
            System.out.print(user_cnt[i] + " ");
        }
        
        scanner.close();

    }
}
