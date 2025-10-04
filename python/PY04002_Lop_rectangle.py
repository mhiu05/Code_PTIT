import sys

input = sys.stdin.readline

class Rectangle:
    def __init__(self, d, r, c):
        self.d = d
        self.r = r 
        self.c = c[0].upper() + c[1::].lower()

    def check(self):
        if self.d <= 0 or self.r <= 0:
            return False
        return True

    def perimeter(self):
        return 2 * (self.d + self.r)
    
    def area(self):
        return self.d * self.r
    
    def color(self):
        return self.c


arr = input().split()
r = Rectangle(int(arr[0]), int(arr[1]), arr[2])
if r.check():
    print('{} {} {}'.format(r.perimeter(), r.area(), r.color()))
else:
    print("INVALID")