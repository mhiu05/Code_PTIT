import math
import sys

input = sys.stdin.readline

def solve(n, source, destination, mid):
    if n == 1:
        print(f"{source} -> {destination}")
        return
    
    solve(n - 1, source, mid, destination)
    print(f"{source} -> {destination}")
    solve(n - 1, mid, destination, source)


if __name__ == "__main__":
    n = int(input())
    solve(n, "A", "C", "B")