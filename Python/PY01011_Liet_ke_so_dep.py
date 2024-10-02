def checkReverseNumber(s):
    for i in range(len(s)):
        if s[i] != s[len(s) - i - 1]:
            return False
    return True

def check(s):
    if(len(s) % 2 == 1):
        return False
    for i in range(len(s)):
        if int(s[i]) % 2 == 1:
            return False
    return True

t = int(input())
for i in range(t):
    s = input() 
    for j in range(int(s)):
        if check(str(j)) and checkReverseNumber(str(j)):
            print(j, end=" ")
    print("\n")