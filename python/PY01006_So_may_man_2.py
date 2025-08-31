def check(s):
    cnt = 0
    for i in range(len(s)):
        if s[i] != '4' and s[i] != '7': 
            return False

    return True
    
if __name__ == "__main__":
    for t in range(int(input())):
        s = input()
        if check(s):
            print("YES")
        else: 
            print("NO")
