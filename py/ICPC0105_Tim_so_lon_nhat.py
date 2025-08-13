if __name__ == "__main__":
    t = int(input())
    for i in range(t):
        s = input()
        max_val = 0
        val = 0
        for i in range(len(s)):
            if s[i].isdigit():
                val = 10 * val + int(s[i])
            else:
                if val != 0:
                    max_val = max(max_val, val)
                    val = 0
                else:
                    continue
        max_val = max(max_val, val)
        print(max_val, end="\n")
