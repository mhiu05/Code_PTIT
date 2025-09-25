if __name__ == "__main__":
    t = int(input())
    while t != 0:
        t -= 1
        s = input().strip()

        if len(s) < 2:
            print("NO")
            continue

        if s[-1] == '6' and s[-2] == '8':
            print("YES")
        else:
            print("NO")
