def check(n):
    a = []

    while n != 0:
        a.append(n % 10)
        n //= 10

    if len(a) < 3:
        return False
    
    a.reverse()
    check = False
    for k in range(len(a)):
        check1 = True
        for i in range(1, k + 1):
            if a[i] <= a[i - 1]:
                check1 = False
                break
        if check1 == False: break
        for i in range(k + 1, len(a)):
            if a[i] >= a[i - 1]:
                check1 = False
                break
        if check1 == True:
            return True
    return False
        


if __name__ == "__main__":
    for _ in range(int(input())):
        n = int(input())
        print("YES" if check(n) else "NO")