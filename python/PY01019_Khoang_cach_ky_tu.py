
def check(s1, s2):
    for i in range(1, len(s1), 1):
        if abs(ord(s1[i]) - ord(s1[i - 1])) != abs(ord(s2[i]) - ord(s2[i - 1])):
            return False
    return True

if __name__ == "__main__":
    t = int(input())
    while t != 0:
        s1 = input()
        s2 = s1[::-1]

        if check(s1, s2):
            print("YES")
        else:
            print("NO")

        t -= 1