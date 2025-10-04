import sys
import math

input = sys.stdin.readline

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y

    def distance(self, a):
        dist =  math.sqrt((self.x - a.x)**2 + (self.y - a.y)**2) 
        return "{:.4f}".format(dist)


def Decimal(x):
    return float(x)


if __name__ == '__main__':
    t = int(input())
    while t > 0:
        arr = input().split()
        p1 = Point(Decimal(arr[0]), Decimal(arr[1]))
        p2 = Point(Decimal(arr[2]), Decimal(arr[3]))
        print(p1.distance(p2))
        t -= 1