for _ in range(int(input())):
    tich = 1
    n = int(input())

    if n == 0:
        print("0")
        continue;

    while n != 0:
        if n % 10 != 0:
            tich *= (n % 10)
        n //= 10

    print(tich)
    