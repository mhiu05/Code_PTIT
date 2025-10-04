import sys

input = sys.stdin.readline

if __name__ == "__main__":
    a = []
    n = int(input())
    for i in range(n):
        name = input().strip()
        C, T = map(int, input().split())
        a.append([name, C, T])

    a.sort(key=lambda x: (-x[1], x[2], x[0]))

    for x in a:
        print(f"{x[0]} {x[1]} {x[2]}")
