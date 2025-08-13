import math


def check_pos(n):
    for i in range(len(n)):
        if i % 2 == 0:
            if int(n[i]) % 2 != 0:
                return False
        else:
            if int(n[i]) % 2 == 0:
                return False
    return True


def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1, 1):
        if n % i == 0:
            return False
    return True


def sum_of_integer(n):
    sum = 0
    while n != 0:
        sum += n % 10
        n //= 10
    return sum


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = input()
        if is_prime(int(sum_of_integer(int(n)))) and check_pos(n):
            print("YES\n")
        else:
            print("NO\n")
