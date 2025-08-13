if __name__ == "__main__":
    for t in range(int(input())):
        a, b = map(int, input().split())
        x1 = input()
        if len(x1.split()) > 1:
            x1, x2 = x1.split()
        else:
            x2 = input()
        if a > b:
            a, b = b, a
        print(
            int(x1.replace(str(b), str(a))) + int(x2.replace(str(b), str(a))),
            int(x1.replace(str(a), str(b))) + int(x2.replace(str(a), str(b))),
        )
