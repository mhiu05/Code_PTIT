h, m, s = map(float, input().split())

# 3h ~ 90 độ ~ 10800s, 6h ~ 21600s

total_s = 3600*h + 60*m + s
ans = total_s * 90 / 10800

# if ans > 180:
#     ans = 360.0 - ans

print("Angle:", ans)  