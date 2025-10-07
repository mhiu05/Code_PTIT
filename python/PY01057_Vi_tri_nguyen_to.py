import math

def is_prime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

def check(s):
    for i in range(len(s)):
        if is_prime(i):
            if not is_prime(int(s[i])):
                return False
        else:
            if is_prime(int(s[i])):
                return False
    return True

for _ in range(int(input())):
    s = input()
    print("YES" if check(s) else "NO")