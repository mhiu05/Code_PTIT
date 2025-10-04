import sys
from collections import deque

input = sys.stdin.readline

def dfs(u, v, adj, visited, removed):
    if u == v:
        return True
    visited[u] = True

    for x in adj[u]:
        if x == removed:
            continue
        if visited[x] == True:
            continue
        if dfs(x, v, adj, visited, removed):
            return True
    
    return False

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        t -= 1

        n, m, u, v = map(int, input().split())
        adj = [[] for _ in range(n + 2)]
        for _ in range(m):
            x, y = map(int, input().split())
            adj[x].append(y)

        ans = 0
        for i in range(1, n + 1):
            if i == u or i == v:
                continue
                
            visited = [False] * (n + 1)
            if dfs(u, v, adj, visited, i) == False:
                ans += 1
        
        print(ans)
