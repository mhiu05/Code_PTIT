import sys

input = sys.stdin.readline

def reverse_number(n):
    res = 0
    while n != 0:
        res = 10*res + (n % 10)
        n //= 10
    return res


if __name__ == "__main__":
    for _ in range(int(input())):
        n = int(input())
        cnt = 0
        while n % 7 != 0:
            cnt += 1
            if cnt > 1000 or n % 7 == 0: break
            n = n + reverse_number(n)
        print(n if n % 7 == 0 else "-1")