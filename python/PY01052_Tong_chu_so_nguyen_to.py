import math

def check(n):
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return n > 1


def tcs(n):
    sum = 0
    while n != 0:
        sum += n % 10
        n //= 10
    return sum


if __name__ == "__main__":
    for _ in range(int(input())):
        s = int(input())
        if check(tcs(s)):
            print("YES")
        else: print("NO")