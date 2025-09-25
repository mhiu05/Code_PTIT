
def tcs(n):
    sum = 0
    while n != 0:
        sum += n % 10
        n //= 10
    return sum

def check(n):
    while n > 10:
        a = n % 10
        b = int((n / 10)) % 10
        if abs(a - b) != 2:
            return False
        n //= 10
    return True

if __name__ == "__main__":
    t = int(input())
    while t > 0:
        t -= 1
        n = int(input())
        # print(tcs(n))
        if check(n) and tcs(n) % 10 == 0:
            print("YES")
        else:
            print("NO")