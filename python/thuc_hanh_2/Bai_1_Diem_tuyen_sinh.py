import sys

class ThiSinh:
    def __init__(self, id_num, raw_name, base_score, ethnicity, area):
        self.ma_ts = f"TS{id_num:02d}"

        self.ho_ten = self.standardize_name(raw_name)

        diem_uu_tien = 0
        
        if area == 1:
            diem_uu_tien += 1.5
        elif area == 2:
            diem_uu_tien += 1.0
        
        if ethnicity.lower() != 'kinh':
            diem_uu_tien += 1.5
        
        self.tong_diem = base_score + diem_uu_tien

        diem_chuan = 20.5
        if self.tong_diem >= diem_chuan:
            self.trang_thai = "Do"
        else:
            self.trang_thai = "Truot"

    def standardize_name(self, name):
        parts = name.strip().split()
        return " ".join(part.capitalize() for part in parts)

    def __str__(self):
        return f"{self.ma_ts} {self.ho_ten} {self.tong_diem:.1f} {self.trang_thai}"

try:
    n = int(sys.stdin.readline())
except ValueError:
    n = 0

danh_sach_thi_sinh = []

for i in range(1, n + 1):
    try:
        ten = sys.stdin.readline()
        diem = float(sys.stdin.readline())
        dan_toc = sys.stdin.readline().strip()
        khu_vuc = int(sys.stdin.readline())
        
        ts = ThiSinh(i, ten, diem, dan_toc, khu_vuc)
        danh_sach_thi_sinh.append(ts)
        
    except (IOError, ValueError) as e:
        continue

danh_sach_thi_sinh.sort(key=lambda ts: (-ts.tong_diem, ts.ma_ts))

# In kết quả
for ts in danh_sach_thi_sinh:
    print(ts)