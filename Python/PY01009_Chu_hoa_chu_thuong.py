if __name__ == "__main__":
    s = input()
    count_lower = 0
    count_upper = 0
    for i in range(len(s)):
        if s[i].islower():
            count_lower += 1
        else:
            count_upper += 1
    if count_lower >= count_upper:
        s = s.lower()
    else:
        s = s.upper()
    print(s)
