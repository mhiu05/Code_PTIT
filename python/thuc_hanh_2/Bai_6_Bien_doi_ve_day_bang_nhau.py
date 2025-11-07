import sys

n = int(sys.stdin.readline())
a = list(map(int, sys.stdin.readline().split()))

min_cost = float('inf')  
best_target = -1     
candidates = []
seen = set()
for x in a:
    if x not in seen:
        candidates.append(x)
        seen.add(x)

for target in candidates:
    current_cost = 0
    
    for x in a:
        current_cost += abs(x - target)

    if current_cost < min_cost:
        min_cost = current_cost
        best_target = target

# 4. In kết quả
print(f"{min_cost} {best_target}")