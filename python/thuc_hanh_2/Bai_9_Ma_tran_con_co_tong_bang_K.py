import sys

def solve_1d(temp_array, k):

    count = 0
    current_sum = 0
    prefix_counts = {0: 1} 

    for val in temp_array:

        if val > k:
            current_sum = 0
            prefix_counts = {0: 1}
        else:
            current_sum += val
            
            diff = current_sum - k
            count += prefix_counts.get(diff, 0)
            
            prefix_counts[current_sum] = prefix_counts.get(current_sum, 0) + 1
            
    return count

def solve_N_squared_M(matrix, n, m, k):

    total_submatrices = 0
    for r1 in range(n):
        temp = [0] * m
        for r2 in range(r1, n):
            for c in range(m):
                temp[c] += matrix[r2][c]
            
            total_submatrices += solve_1d(temp, k)
            
    return total_submatrices

def solve_M_squared_N(matrix, n, m, k):
    total_submatrices = 0
    for c1 in range(m):
        temp = [0] * n
        for c2 in range(c1, m):
            for r in range(n):
                temp[r] += matrix[r][c2]
                
            # Giải bài toán 1D trên mảng temp
            total_submatrices += solve_1d(temp, k)
            
    return total_submatrices

def solve():
    try:
        n, m, k = map(int, sys.stdin.readline().split())
        matrix = []
        for _ in range(n):
            matrix.append([int(c) for c in sys.stdin.readline().strip()])
    except (IOError, ValueError):
        return

    if n <= m:
        print(solve_N_squared_M(matrix, n, m, k))
    else:
        print(solve_M_squared_N(matrix, n, m, k))

try:
    t = int(sys.stdin.readline())
except ValueError:
    t = 0

for _ in range(t):
    solve()