for _ in range(int(input())):
    s = input()
    S = sum(int(x) for x in s)
    print("YES" if S % 3 == 0 else "NO")