import math

def solve(s):
    i = 0
    while i < len(s):
        c = s[i]
        cnt = 0
        # print(i, end=": ")
        while i < len(s) and c == s[i]:
            cnt += 1
            i += 1
        print(f"{cnt}{c}", end="")
        # print()

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        s = input()
        solve(s)
        print()