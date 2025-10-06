def check(s):
    for c in s:
        if c != '0' and c != '1' and c != '2':
            return False
    return True

if __name__ == "__main__":
    for _ in range(int(input())):
        s = input()
        print("YES" if check(s) else "NO")