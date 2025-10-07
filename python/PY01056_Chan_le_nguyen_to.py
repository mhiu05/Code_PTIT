import math

def is_prime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

def tcs(s):
    sum = 0
    for i in range(len(s)):
        sum += int(s[i])
    return sum

def check(s):
    for i in range(len(s)):
        if i % 2 == 0:
            if int(s[i]) % 2 != 0:
                return False
        else:
            if int(s[i]) % 2 == 0:
                return False
    return True

for _ in range(int(input())):
    s = input()
    print("YES" if is_prime(tcs(s)) and check(s) else "NO") 
    