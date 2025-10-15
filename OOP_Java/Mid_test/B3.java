package Mid_test;

import java.time.DateTimeException;
import java.time.format.DateTimeFormatter;
import java.util.*;

class CN{
    String id;
    String name;
    String timeIn;
    String timeOut;
    int workMinutes;
    String status;

    public CN(String id, String name, String timeIn, String timeOut){
        this.id = id;
        this.name = name;
        this.timeIn = timeIn;
        this.timeOut = timeOut;
    }

    private void cal(){
        String[] inParts = timeIn.split(":");
        int inHour = Integer.parseInt(inParts[0]);
        int inMinute = Integer.parseInt(inParts[1]);

        String[] outParts =timeOut.split(":");
        int outHour = Integer.parseInt(outParts[0]);
        int outMinute = Integer.parseInt(outParts[1]);

        int totalInMinutes = inHour * 60 + inMinute;
        int totalOutMinutes = outHour * 60 + outMinute;

        this.workMinutes = totalOutMinutes - totalInMinutes - 60;

        this.status = (workMinutes >= 8 * 60) ? "DU" : "THIEU";
    }

    public String getFormattedTime(){
        int hours = workMinutes / 60;
        int minutes = workMinutes % 60;
        return hours + " gio " + minutes + " phut";
    }

    @Override
    public String toString(){
        return id + " " + name + " " + getFormattedTime() + " " + status;
    }
}

public class B3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());
        List<CN> CNs = new ArrayList<>();
        while(t-- > 0){
            String ma = sc.nextLine().trim();
            String ten = sc.nextLine().trim();
            String vao = sc.nextLine().trim();
            String ra = sc.nextLine().trim();

            CNs.add(new CN(ma, ten, vao, ra));

        }

        Collections.sort(CNs, new Comparator<CN>() {
            @Override
            public int compare(CN w1, CN w2) {
                if(w1.workMinutes != w2.workMinutes){
                    return Integer.compare(w2.workMinutes, w1.workMinutes);
                } else{
                    return w1.id.compareTo(w2.id);
                }
            }
        });

        for(CN cn : CNs){
            System.out.println(cn);
        }

        sc.close();
    }
}
