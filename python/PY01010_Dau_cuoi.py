for t in range(int(input())):
    s = input()
    a = 10*int(s[0]) + int(s[1])
    b = 10*int(s[-2]) + int(s[-1])
    # print(a)
    # print(b)
    if a == b:
        print("YES")
    else:
        print("NO")