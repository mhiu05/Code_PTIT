S = input().split()

tmp = ""
for s in S:
    if len(tmp) < len(s):
        tmp = s

print(f"{tmp} {len(tmp)}")