import math

def ntcn(n):
    if n == 1: 
        return 0
    N = n
    for i in range(2, int(math.sqrt(n)) + 1, 1):
        if n % i == 0:
            N -= N / i
            while n % i == 0:
                n /= i
    if n != 1:
        N -= N / n
    return int(N)

def is_prime(n):
    for i in range(2, int(math.sqrt(n)) + 1, 1):
        if n % i == 0:
            return False
    return n > 1

if __name__ == "__main__":
    for t in range(int(input())):
        n = int(input())
        if is_prime(ntcn(n)):
            print("YES")
        else:
            print("NO")


