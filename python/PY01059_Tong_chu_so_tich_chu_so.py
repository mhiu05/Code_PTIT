def check(s): # Check is non-zero at all odd position
    for i in range(0, len(s)):
        if int(s[i]) != 0 and i % 2 != 0:
            return True
    return False

if __name__ == "__main__":
    for _ in range(int(input())):
        s = input()
        Sum = 0
        tich = 1 if check(s) else 0

        for i in range(0, len(s)):
            if i % 2 == 0:
                Sum += int(s[i])
            else:
                if int(s[i]) != 0: 
                    tich *= int(s[i])
        
        print(f"{Sum} {tich}")