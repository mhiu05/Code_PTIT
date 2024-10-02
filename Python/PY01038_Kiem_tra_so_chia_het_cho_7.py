def reverse_number(n):
    rev = 0
    while(n):
        rev = 10 * rev + n % 10
        n //= 10
    return rev 

def find_answer(n):
    if n % 7 == 0:
        return n
    ans = n + reverse_number(n)
    cnt = 0
    while(ans % 7 != 0):
        cnt += 1
        ans = ans + reverse_number(ans)
        if cnt > 10**7:
            ans = -1
            break
    return ans

t = int(input())
for i in range(t):
    n = int(input())
    print(find_answer(n), sep="\n")
