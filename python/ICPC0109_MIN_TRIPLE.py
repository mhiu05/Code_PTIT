import sys
input = sys.stdin.readline

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        n = int(input())
        min1 = min2 = min3 = 10**9

        nums_read = 0
        while nums_read < n:
            line = input()
            for x in map(int, line.split()):
                if x <= min1:
                    min3 = min2
                    min2 = min1
                    min1 = x
                elif x <= min2:
                    min3 = min2
                    min2 = x
                elif x <= min3:
                    min3 = x
                nums_read += 1
        
        print(min1 + min2 + min3)
        t -= 1
