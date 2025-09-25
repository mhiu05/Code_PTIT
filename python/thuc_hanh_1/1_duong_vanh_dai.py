m = int(input())
v = int(input())
t = int(input())
d = input().strip()

# Đề ngược

if d == 'C': # ngược
    print((t * v) % m)
elif d == 'A': # xuôi
    print((m - t * v) % m)