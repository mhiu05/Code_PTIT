import math

def pttsnt(n):
    mp = {}
    for i in range(2, int(math.sqrt(n)), 1):
        if n % i == 0:
            cnt = 0
            while n % i == 0:
                cnt += 1
                n //= i
            mp[i] = cnt
    if n != 1:
        mp[n] = 1
    
    print("1", end="")
    for key in mp:
        print(f" * {key}^{mp[key]}", end="")



if __name__ == "__main__":
    t = int(input())
    while t != 0:
        t -= 1
        n = int(input())
        pttsnt(n)
        print()