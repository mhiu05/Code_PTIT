def dfs(x, a, vs, n, m):
    vs[x] = 1
    for i in range(1, n + 1):
        if a[x][i] == 1 and vs[i] == 0:
            dfs(i, a, vs, n, m)

if __name__ == "__main__":
    n, m, x = map(int, input().split())

    a = [[0]*(m + 5) for _ in range(n + 5)]

    vs = [0]*(n + 5)

    for i in range(m):
        X, Y = map(int, input().split())
        a[X][Y] = 1
        a[Y][X] = 1
    
    dfs(x, a, vs, n, m)

    for i in range(1, n + 1):
        if vs[i] == 0:
            print(i)