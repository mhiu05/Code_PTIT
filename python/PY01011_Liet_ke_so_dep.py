from collections import deque

def solve(n, ans):
    dq = deque()
    dq.append("8")
    dq.append("6")
    dq.append("4")
    dq.append("2")

    while len(dq) != 0:
        s = dq.pop()
        S = s + s[::-1]

        if int(S) > n: 
            continue
        
        ans.append(int(S))

        dq.appendleft(s + "8")
        dq.appendleft(s + "6")
        dq.appendleft(s + "4")
        dq.appendleft(s + "2")
        dq.appendleft(s + "0")
    
    ans.sort()
    result = []
    for num in ans:
        if num > n:
            break
        result.append(str(num))
    print(' '.join(result))

if __name__== "__main__":
    for t in range(int(input())):
        n = int(input())
        if n <= 22 or n >= 1000000:
            continue
        ans = []
        solve(n, ans)

