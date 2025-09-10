package Practice_2;
import java.util.*;
import java.io.*;

public class A_Doc_file_van_ban {
    public static void main(String[] args) {
        try{
            Scanner sc = new Scanner(new File("DATA.in"));
            while(sc.hasNextLine()){
                System.out.println(sc.nextLine());
            }
            sc.close();
        } catch(FileNotFoundException fNot){
            fNot.printStackTrace();
        }
    }
}
