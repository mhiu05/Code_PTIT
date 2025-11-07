import sys

# sys.getrecursionlimit(200000)

N_MAX = 100000

parent = [i for i in range(N_MAX + 1)]

size = [1] * (N_MAX + 1)

def find(i):
    if parent[i] == i:
        return i
    parent[i] = find(parent[i])
    return parent[i]

def union(i, j):
    root_i = find(i)
    root_j = find(j)
    
    if root_i != root_j:
        if size[root_i] < size[root_j]:
            parent[root_i] = root_j      # Gốc của nhóm i giờ trỏ về gốc của nhóm j
            size[root_j] += size[root_i] # Cập nhật kích thước nhóm lớn
        else:
            parent[root_j] = root_i      # Gốc của nhóm j giờ trỏ về gốc của nhóm i
            size[root_i] += size[root_j] # Cập nhật kích thước nhóm lớn

try:
    q = int(sys.stdin.readline())
except ValueError:
    q = 0

for _ in range(q):
    try:
        x, y, z = map(int, sys.stdin.readline().split())
        
        if z == 1:
            union(x, y)
        elif z == 2:
            if find(x) == find(y):
                print(1)
            else:
                print(0)
                
    except (IOError, ValueError):
        continue