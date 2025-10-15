if __name__ == "__main__":
    for _ in range(int(input())):
        n, m = map(int, input().split())

        a = []
        for i in range(n):
            row = list(map(int, input().split()))
            a.append(row)

        k = []
        for i in range(3):
            row = list(map(int, input().split()))
            k.append(row)
        
        ans = 0
        for i in range(n - 2):
            for j in range(m - 2):
                res = 0
                for ix in range(3):
                    for jx in range(3):
                        res += a[i + ix][j + jx] * k[ix][jx]
                ans += res
        print(ans)

                