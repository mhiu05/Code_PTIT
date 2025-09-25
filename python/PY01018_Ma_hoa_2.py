
P = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_."

while True:
    data = input().split()

    k = int(data[0])
    if k == 0:
        break

    A = []
    s = data[1]
    for i in range(len(s)):
        idx = -1
        for j in range(len(P)):
            if s[i] == P[j]:
                idx = j
                break
        A.append(P[(idx + k) % 28])

    ans = A[::-1]
    for i in range(len(ans)):
        print(ans[i], end="")
    print()
