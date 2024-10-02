import math

def solve(n):
    print("1 *", end=" ")
    for i in range(2, int(math.sqrt(n)) + 1, 1):
        if n % i == 0:
            cnt = 0
            while(n % i == 0):
                cnt += 1
                n //= i
            if n == 1:
                print(i, cnt, sep="^", end="\n")
            else:
                print(i, cnt, sep="^", end=" * ")
    if n != 1:
        print(n, end="^1\n")

t = int(input())
for i in range(t):
    n = int(input())
    solve(n)