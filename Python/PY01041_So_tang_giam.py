def check_increase_decrease_number(s):
    if len(s) < 2:
        return False
    
    check = True
    max_val = 0

    for i in range(len(s)):
        if int(s[i]) > max_val:
            max_val = int(s[i])

    if int(s[0]) == max_val:
        check = False

    for i in range(1, len(s), 1):
        if check == True:
            if int(s[i]) == max_val:
                check = False
            if s[i] <= s[i - 1]:
                return False
        else:
            if s[i] >= s[i - 1]:
                return False
            
    return True




t = int(input())
for i in range(t):
    s = input()
    if(check_increase_decrease_number(s)):
        print("YES\n")
    else:
        print("NO\n"); 