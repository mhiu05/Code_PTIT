import sys

input = sys.stdin.readline
INF = 10**18

coef = [1, -2, 3, -4, 5]   # hệ số trong block

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        t -= 1
        n, k = map(int, input().split())
        a = list(map(int, input().split()))

        # dp[g][p]: giá trị lớn nhất sau khi chọn g block hoàn chỉnh,
        #           và đang ở vị trí p trong block hiện tại (0..4)
        dp = [[-INF] * 5 for _ in range(k + 1)]
        dp[0][0] = 0

        for x in a:
            ndp = [row[:] for row in dp]   # copy trạng thái cũ
            for g in range(k):
                for p in range(5):
                    if dp[g][p] == -INF:
                        continue
                    val = dp[g][p] + coef[p] * x
                    if p < 4:  # chưa hoàn thành block
                        ndp[g][p+1] = max(ndp[g][p+1], val)
                    else:      # p == 4 -> hoàn thành 1 block
                        ndp[g+1][0] = max(ndp[g+1][0], val)
            dp = ndp

        ans = dp[k][0]
        print(ans if ans != -INF else 0)