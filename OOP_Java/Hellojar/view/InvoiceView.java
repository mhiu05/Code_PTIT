package view;

import vn.edu.ptit.Invoice;
import vn.edu.ptit.Subject;

public class InvoiceView {

    public static void show(Invoice invoice) {
        System.out.println("Mã sinh viên: " + invoice.getSt().getCode());
        System.out.println("Họ tên: " + invoice.getSt().getName());
        System.out.println("Các môn học:");
        for (Subject subject : invoice.getAlSubject()) {
            System.out.println(subject.getName());
        }
        System.out.println("Học phí phải nộp là: " + invoice.getAmount());
        System.out.println("Theo QĐ: " + invoice.getRule().getCode());
    }
    
}
