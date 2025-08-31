def convert(X, p, q):
    return int(X.replace(str(p), str(q)))

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        p, q = map(int, input().split())

        X1 = input()
        if len(X1.split()) > 1: 
            X1, X2 = X1.split()
        else: 
            X2 = input()

        if p > q: 
            p, q = q, p

        print(convert(X1, q, p) + convert(X2, q, p), end=" ")
        print(convert(X1, p, q) + convert(X2, p, q))
        t -= 1