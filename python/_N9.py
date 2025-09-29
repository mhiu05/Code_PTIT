import tkinter as tk
from tkinter import messagebox

class Calculator:
    def __init__(self):
        self.window = tk.Tk()
        self.window.title("Máy Tính Cá Nhân - Nhóm 9")
        self.window.geometry("500x600")
        self.window.resizable(False, False)
        
        # Biến lưu trữ biểu thức hiện tại
        self.current_expression = ""
        
        # Tạo giao diện
        self.create_widgets()
        
    def create_widgets(self):
        # Tạo màn hình hiển thị
        self.display = tk.Entry(self.window, font=('Arial', 18), justify='right', bd=10)
        self.display.grid(row=0, column=0, columnspan=4, sticky="nsew", padx=10, pady=10)
        
        # Danh sách các nút
        buttons = [
            ('7', 1, 0), ('8', 1, 1), ('9', 1, 2), ('/', 1, 3),
            ('4', 2, 0), ('5', 2, 1), ('6', 2, 2), ('*', 2, 3),
            ('1', 3, 0), ('2', 3, 1), ('3', 3, 2), ('-', 3, 3),
            ('0', 4, 0), ('.', 4, 1), ('=', 4, 2), ('+', 4, 3),
            ('Clear', 5, 0), ('Back', 5, 1)
        ]
        
        # Tạo các nút
        for (text, row, col) in buttons:
            if text == '=':
                btn = tk.Button(self.window, text=text, font=('Arial', 14), 
                               command=self.calculate, bg='orange')
            elif text in ['C', 'CE']:
                btn = tk.Button(self.window, text=text, font=('Arial', 14), 
                               command=self.clear if text == 'C' else self.clear_entry)
            else:
                btn = tk.Button(self.window, text=text, font=('Arial', 14), 
                               command=lambda t=text: self.add_to_expression(t))
            
            btn.grid(row=row, column=col, sticky="nsew", padx=5, pady=5)
        
        # Cấu hình kích thước hàng và cột
        for i in range(6):
            self.window.grid_rowconfigure(i, weight=1)
        for i in range(4):
            self.window.grid_columnconfigure(i, weight=1)
    
    # Thêm giá trị vào biểu thức hiện tại
    def add_to_expression(self, value):
        self.current_expression += str(value)
        self.display.delete(0, tk.END)
        self.display.insert(0, self.current_expression)
    
    # Xóa toàn bộ biểu thức
    def clear(self):
        self.current_expression = ""
        self.display.delete(0, tk.END)
        
    # Xóa ký tự cuối cùng
    def clear_entry(self):
        self.current_expression = self.current_expression[:-1]
        self.display.delete(0, tk.END)
        self.display.insert(0, self.current_expression)
    
    def calculate(self):
        try:
            # Kiểm tra chia cho 0
            if '/0' in self.current_expression:
                messagebox.showerror("Lỗi", "Không thể chia cho 0!")
                return
            
            # Tính toán kết quả
            result = eval(self.current_expression)
            self.current_expression = str(result)
            self.display.delete(0, tk.END)
            self.display.insert(0, self.current_expression)
            
        except ZeroDivisionError:
            messagebox.showerror("Lỗi", "Không thể chia cho 0!")
            self.clear()
        except:
            messagebox.showerror("Lỗi", "Biểu thức không hợp lệ!")
            self.clear()
    
    def run(self):
        """Chạy ứng dụng"""
        self.window.mainloop()

if __name__ == "__main__":
    app = Calculator()
    app.run()