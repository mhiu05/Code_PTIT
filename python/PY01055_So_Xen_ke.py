def check(s):
    if len(s) % 2 == 0:
        return False
    if len(s) == 1:
        return True
    if s[0] == s[1]:
        return False
    
    c = int(s[0])
    for i in range(2, len(s), 2):
        if int(s[i]) != c:
            return False
        
    return True

if __name__ == "__main__":
    for _ in range(int(input())):
        s = input()
        print("YES" if check(s) else "NO")