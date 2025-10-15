for _ in range(int(input())):
    s = input()
    a = []
    res = 0
    for c in s:
        if ('A' <= c <= 'Z') or ('a' <= c <= 'z'):
            a.append(c)
        else:
            res += int(c)
    a.sort()
    for i in range(len(a)):
        print(a[i], end="")
    print(res)