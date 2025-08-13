def sum_of_integer(n):
    sum = 0
    while n != 0:
        sum += n % 10
        n //= 10
    return sum


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = int(input())
        if sum_of_integer(n) % 3 == 0:
            print("YES\n")
        else:
            print("NO\n")
