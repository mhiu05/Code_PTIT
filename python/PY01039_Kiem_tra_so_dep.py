def check(n):
    N = n
    mark = [-1]*20
    a = []
    while n != 0:
        mark[n % 10] = 1
        a.append(n % 10)
        n //= 10
    cnt = 0
    for i in range(0, 10, 1):
        if mark[i] == 1:
            cnt += 1
    if cnt != 2:
        return False
    
    for i in range(len(a) - 3, -1, -1):
        if a[i] != a[i + 2]: return False
    return True



if __name__ == "__main__":
    for _ in range(int(input())):
        n = int(input())
        print("YES" if check(n) else "NO")