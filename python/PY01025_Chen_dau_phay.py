s = input()

S = []

cnt = 0
for i in range(len(s) - 1, -1, -1):
    cnt += 1
    S.append(s[i])
    if cnt % 3 == 0 and i != 0:
        S.append(",")

S1 = S[::-1]

for i in range(len(S1)):
    print(S1[i], end="")