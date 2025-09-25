import sys

data = sys.stdin.read().strip().split()

nums = list(map(int, data[1::]))

max1 = -1
max2 = -1

for x in nums:
    if x > max1:
        max2 = max1
        max1 = x
    elif max1 > x > max2:
        max2 = x

print(f"Silver = {max2}")