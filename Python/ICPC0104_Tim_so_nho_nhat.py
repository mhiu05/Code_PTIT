if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        s = input()
        min_val = 10**18 + 5
        val = 0
        for i in range(len(s)):
            if s[i].isdigit():
                val = 10 * val + int(s[i])
            else:
                if val != 0:
                    min_val = min(min_val, val)
                    val = 0
                else:
                    continue
        print(min_val, end="\n")
