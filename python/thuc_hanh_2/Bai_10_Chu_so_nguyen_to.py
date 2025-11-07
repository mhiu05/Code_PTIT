from collections import deque

def solve(n):
    a = []
    dq = deque()
    dq.append("2")
    dq.append("3")
    dq.append("5")
    dq.append("7")
    while len(dq) != 0:
        s = dq.popleft()

        if len(s) >= n + 1 or len(s) >= 10:
            break

        if len(s) >= 4 and s[len(s) - 1] != '2': 
            a.append(int(s))

        dq.append(s + "2")
        dq.append(s + "3")
        dq.append(s + "5")
        dq.append(s + "7")
    return a

def check(N):
    mark = [0]*10
    while N != 0:
        mark[N % 10] = 1
        N //= 10
    
    return mark[2] == 1 and mark[3] == 1 and mark[5] == 1 and mark[7] == 1

if __name__ == "__main__":
    n = int(input())
    a = solve(n)
    for i in range(len(a)):
        if check(a[i]):
            print(a[i])
