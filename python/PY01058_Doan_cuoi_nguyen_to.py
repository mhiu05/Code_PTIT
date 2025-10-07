import math

def is_prime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1

for _ in range(int(input())):
    s = input()
    print("YES" if is_prime(int(s[-4::])) else "NO")