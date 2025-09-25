
def solve(s):
    for i in range(len(s)):
        if i % 2 == 0:
            cnt = ord(s[i + 1]) - ord('0')
            for j in range(cnt):
                print(s[i], end="")
    
    print()

if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        s = input()
        solve(s)