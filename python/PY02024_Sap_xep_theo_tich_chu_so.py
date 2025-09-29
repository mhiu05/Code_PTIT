import math

def tichcs(n):
    res = 1
    while n != 0:
        res *= (n % 10)
        n //= 10
    return res    

if __name__ == "__main__":
    t = int(input())
    while t != 0:
        t -= 1
        
        n = int(input())
        arr = list(map(int, input().split()))
        
        arr.sort(key=lambda x: (tichcs(x), x))
        
        for i in range(len(arr)):
            print(arr[i], end=" ")
        
        print()
        
        
        
        
        