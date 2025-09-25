import sys
import math

input = sys.stdin.readline

A = [1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000]

def cal(num, len, count):
    n = num // A[len]
    if num == 0:
        count[n] += len + 1
        return
    
    for i in range(n):
        count[i] += A[len]

    count[n] += num % A[len] + 1

    if len == 0:
        return
    
    for i in range(10):
        count[i] += n * len * A[len - 1]
    
    cal(num % A[len], len - 1, count)

if __name__ == "__main__":
    t = int(input())
    while t != 0:
        t -= 1

        a, b = map(int, input().split())

        if a == 0 and b == 0:
            continue

        if a > b:
            a, b = b, a

        a -= 1
        count1 = [1] * 10
        count2 = [1] * 10

        if a:
            p1 = math.floor(math.log10(a))   
            cal(a, p1, count1)
            for i in range(p1 + 1):
                count1[0] -= A[i]

        p2 = math.floor(math.log10(b))
        cal(b, p2, count2)

        for i in range(p2 + 1):
            count2[0] -= A[i]

        result = [count2[0] - count1[0]]
        for i in range(1, 10):
            result.append(count2[i] - count1[i])
        
        print(' '.join(map(str, result)))

