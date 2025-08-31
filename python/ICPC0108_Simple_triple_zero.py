if __name__ == "__main__":
    for t in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        arr.sort()

        cnt = 0

        for i in range(n - 3):
            l, r = i + 1, n - 1
            while l < r:
                s = arr[i] + arr[l] + arr[r]
                if s == 0:
                    cnt += 1
                    l += 1
                    r -= 1
                elif s < 0:
                    l += 1
                else:
                    r -= 1
        
        print(cnt)

