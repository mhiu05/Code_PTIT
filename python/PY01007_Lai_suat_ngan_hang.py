import math

for t in range(int(input())):
    n, x, m = map(float, input().split())
    k = math.log(m / n, (100 + x)/100)
    print(int(math.ceil(k)))