import java.util.*;
import java.io.*;

public class Hellofile_HELLO_FILE{
    public static void main(String[] args) {
        try{
            Scanner a = new Scanner(new File("Hello.txt"));
            while(a.hasNextLine()){
                System.out.println(a.nextLine());
            }
            a.close();
        } catch(FileNotFoundException fNot){
            fNot.printStackTrace();
        }
    }
}