import math

def is_prime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

def check(s):
    res = 0
    for i in range(len(s) - 4, len(s)):
        res = 10*res + (int(s[i]) - int('0'))
    return is_prime(res)

if __name__ == "__main__":
    for _ in range(int(input())):
        s = input()
        print("YES" if check(s) else "NO")
