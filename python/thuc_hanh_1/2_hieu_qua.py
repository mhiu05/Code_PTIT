
a0, b0, c0 = map(int, input().split())
a1, b1, c1 = map(int, input().split())

if a1 < a0: 
    a1 += 24

print(60*(60*(a1 - a0) + (b1 - b0)) + (c1 - c0))