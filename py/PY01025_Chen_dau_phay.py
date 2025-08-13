s = input()
i = len(s) - 1
cnt = 0
while(i != 0):
    cnt += 1;
    if cnt % 3 == 0:
        s = s[:i] + ',' + s[i:]
    i -= 1
print(s)