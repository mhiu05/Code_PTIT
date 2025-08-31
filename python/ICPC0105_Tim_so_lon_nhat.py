if __name__ == "__main__":
    t = int(input())
    while t > 0:
        s = input()

        max_val, res = -1, 0

        for i in range(len(s)):
            if s[i].isdigit():
                res = 10*res + int(s[i])
            else:
                if res != 0:
                    max_val = max(max_val, res)
                    res = 0

        if res != 0: 
            max_val = max(max_val, res)

        print(max_val)
        t -= 1