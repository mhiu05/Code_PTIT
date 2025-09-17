import java.util.*;
import java.io.*;

public class J07001_Doc_file_van_ban {
    public static void main(String[] args) {
        try {
            Scanner sc = new Scanner(new File("DATA.in"));

            while(sc.hasNextLine()){
                System.out.println(sc.nextLine());
            }

            sc.close();
        } catch (FileNotFoundException fNot) {
            System.out.println("Could not found the file");
        }
    }
}
