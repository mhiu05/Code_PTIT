import vn.edu.ptit.*;
import view.*;
import java.util.*;

class PaymentController {

    public Invoice getInvoice() {
        Scanner sc = new Scanner(System.in);

        // Sinh viên
        String studentId = sc.nextLine().trim();
        String studentName = sc.nextLine().trim();
        Student st = new Student();
        st.setId(studentId);
        st.setName(studentName);

        // Môn học
        int n = Integer.parseInt(sc.nextLine().trim());
        List<Subject> subjects = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            String subId = sc.nextLine().trim();
            String subName = sc.nextLine().trim();
            int credit = Integer.parseInt(sc.nextLine().trim());
            Subject sub = new Subject();
            sub.setId(subId);
            sub.setName(subName);
            sub.setCredit(credit);
            subjects.add(sub);
        }

        // Quy định học phí
        String ruleId = sc.nextLine().trim();
        String ruleName = sc.nextLine().trim();
        double unitPrice = Double.parseDouble(sc.nextLine().trim());
        Rule rule = new Rule();
        rule.setId(ruleId);
        rule.setName(ruleName);
        rule.setUnitPrice(unitPrice);

        // Hóa đơn
        Invoice invoice = new Invoice();
        invoice.setSt(st);
        invoice.setRule(rule);
        invoice.setSubjects(subjects);

        return invoice;
    }
}

public class Hellojar {
    public static void main(String[] args) {
        PaymentController pc = new PaymentController();
        // Output for test
        Invoice invoice = pc.getInvoice();
        InvoiceView.show(invoice);
    }
}
