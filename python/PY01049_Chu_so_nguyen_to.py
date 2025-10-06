import math

def is_prime(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1


def check(s):
    if is_prime(len(s)) == False: return False
    cnt = 0
    for i in range(len(s)):
        if s[i] != '2' and s[i] != '3' and s[i] != '5' and s[i] != '7':
            cnt += 1
    return len(s) - cnt > cnt


if __name__ == "__main__":
    for _ in range(int(input())):
        s = input()
        print("YES" if check(s) else "NO")