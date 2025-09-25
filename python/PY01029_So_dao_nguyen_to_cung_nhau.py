import math

def get_reverse(n):
    res = 0
    while n != 0:
        res = 10*res + n % 10
        n //= 10
    return res

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        n_rev = get_reverse(n)
        if math.gcd(n, n_rev) == 1:
            print("YES")
        else:
            print("NO")