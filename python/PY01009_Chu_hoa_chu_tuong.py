s = input()

cnt_lower = 0
cnt_upper = 0

for i in range(len(s)):
    if(s[i].isupper()):
        cnt_upper += 1
    else:
        cnt_lower += 1

if(cnt_lower >= cnt_upper):
    print(s.lower())
else:
    print(s.upper())