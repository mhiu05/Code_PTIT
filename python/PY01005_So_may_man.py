def check(s):
    cnt = 0
    for i in range(len(s)):
        if s[i] == '4': 
            cnt += 1
        elif s[i] == '7':
            cnt += 1

    if cnt == 4 or cnt == 7:
        return True
    return False
    

if __name__ == "__main__":
    s = input()
    if check(s):
        print("YES")
    else: 
        print("NO")
