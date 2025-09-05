
# a + b = x.k
# b = x.k - a <= n - a
# 1 <= x <= n / k

if __name__ == "__main__":
    a, k, n = map(int, input().split())
    check = False
    for x in range(1, n // k + 1, 1):
        b = x * k - a
        if b >= 1 and b <= n - a:
            check = True
            print(b, end=" ")

    if check == False:
        print("-1")