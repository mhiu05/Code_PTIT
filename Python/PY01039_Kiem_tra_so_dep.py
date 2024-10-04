def check_only_2_digits(n):
    s = set()
    while n != 0:
        s.add(n % 10)
        n //= 10
    return len(s) == 2


def check_nice_number(n):
    for i in range(2, len(n), 1):
        if n[i] != n[i - 2]:
            return False
    return True


if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        n = input()
        if check_nice_number(n) and check_only_2_digits(int(n)):
            print("YES\n")
        else:
            print("NO\n")
