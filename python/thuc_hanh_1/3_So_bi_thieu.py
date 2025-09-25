import sys
input = sys.stdin.readline

n = int(input())

if n == 0:
    print("0")
elif n == 1:
    print("0")
else:
    total = n * (n + 1) // 2
    for _ in range(n - 1):
        x = int(input())
        total -= x

    print(total)


