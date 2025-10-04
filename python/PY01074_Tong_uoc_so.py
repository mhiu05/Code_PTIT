import sys
from array import array

def sieve_spf(limit):
    spf = array('I', range(limit + 1))  # unsigned int 4 bytes
    for i in range(2, int(limit**0.5) + 1):
        if spf[i] == i:  # i là số nguyên tố
            step = i
            for j in range(i * i, limit + 1, step):
                if spf[j] == j:
                    spf[j] = i
    return spf

def factor_sum(x, spf):
    s = 0
    while x > 1:
        p = spf[x]
        s += p
        x //= p
    return s

def main():
    input = sys.stdin.readline
    n = int(input())
    maxA = 2_000_000
    spf = sieve_spf(maxA)

    total = 0
    for _ in range(n):
        x = int(input())
        total += factor_sum(x, spf)

    print(total)

if __name__ == "__main__":
    main()