import math

def check_snt(n):
    for i in range(2, int(math.sqrt(n)) + 1, 1):
        if n % i == 0 :
            return False
    return n > 1

def sum_of_digit(n):
    sum = 0
    while n != 0:
        sum += (n % 10)
        n //= 10
    return sum

def check(a, b):
    gcdAB = 1
    for i in range(1, min(a, b) + 1, 1):
        if a % i == 0 and b % i == 0:
            gcdAB = max(i, gcdAB)

    # print(gcdAB)
    # print(sum_of_digit(gcdAB))

    if check_snt(sum_of_digit(gcdAB)):
        return True
    return False


if __name__ == "__main__":
    t = int(input())
    while t > 0:
        a, b = map(int, input().split())
        if check(a, b):
            print("YES")
        else:
            print("NO")
        t -= 1