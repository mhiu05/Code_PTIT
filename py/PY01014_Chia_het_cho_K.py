import math

a, k, N = map(int, input().split())
ans = N // k - math.ceil((a + 1) / k) + 1
if ans <= 0:
    print("-1")
else:
    for i in range(math.ceil((a + 1) / k), N // k + 1, 1):
        print(k * i - a, end=" ")
