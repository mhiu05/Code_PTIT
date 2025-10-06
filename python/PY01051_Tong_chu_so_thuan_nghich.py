def check(n):
    res = 0
    N = n 
    while n != 0:
        res = 10*res + (n % 10)
        n //= 10
    return res == N 


def tcs(n):
    sum = 0
    while n != 0:
        sum += n % 10
        n //= 10
    return sum


if __name__ == "__main__":
    for _ in range(int(input())):
        s = int(input())
        if tcs(s) >= 10 and check(tcs(s)):
            print("YES")
        else: print("NO")