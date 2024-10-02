import math

t = int(input())
for i in range(t):
    n, x, m = map(float, input().split())
    print(math.ceil(math.log(m / n, 1 + x / 100)), end="\n")
