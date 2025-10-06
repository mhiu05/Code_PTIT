import sys
from collections import deque

input = sys.stdin.readline

a = []

def is_inverse_number(n):
    res = 0
    N = n
    while n != 0:
        res = 10*res + (n % 10)
        n //= 10
    return res == N

def sieve():
    dq = deque()
    dq.append("2")
    dq.append("4")
    dq.append("6")
    dq.append("8")
    while dq:
        s = dq.popleft()
        if len(s) % 2 == 0 and is_inverse_number(int(s)): a.append(int(s))
        if int(s) > 10**6:
            continue

        dq.append(s + "0")
        dq.append(s + "2")
        dq.append(s + "4")
        dq.append(s + "6")
        dq.append(s + "8")
    a.sort()


if __name__ == "__main__":
    sieve()
    for _ in range(int(input())):
        n = int(input())
        for i in range(len(a)):
            if a[i] < n:
                print(a[i], end=' ')
            else:
                break
        print()
        
