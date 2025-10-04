import sys

input = sys.stdin.readline

n = int(input())

mark = {}
for i in range(n - 1):
    x, y = map(int, input().split())

    if x not in mark:   
        mark[x] = 1
    else:
        mark[x] += 1

    if y not in mark:
        mark[y] = 1
    else:
        mark[y] += 1

check = 0
for key in mark:
    if mark[key] == n - 1:
        check = 1

if check == 1:
    print("Yes")
else:
    print("No")