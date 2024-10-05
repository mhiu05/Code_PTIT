if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        b = int(input())
        s = input()
        n = int(s, 2)
        if n == 0:
            print("0\n")
        else:
            digits = "0123456789ABCDEF"
            result = ""
            while n != 0:
                result = digits[n % b] + result
                n //= b
            print(result, end="\n")
