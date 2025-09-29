import math

def tcs(n):
    sum = 0
    while n != 0:
        sum += n % 10
        n //= 10
    return sum    

if __name__ == "__main__":
    t = int(input())
    while t != 0:
        t -= 1
        
        n = int(input())
        arr = list(map(int, input().split()))
        
        arr.sort(key=lambda x: (tcs(x), x))
        
        for i in range(len(arr)):
            print(arr[i], end=" ")
        
        print()
        
        
        
        
        