if __name__ == "__main__":
    t = int(input())
    while t > 0:

        b = int(input())
        s = input()

        if b == 2:
            print(s)
        elif b == 4:
            if len(s) % 2 != 0:
                s = "0" + s

            for i in range(0, len(s), 2):
                x = 2 * int(s[i]) + int(s[i + 1])
                print(x, end="")
            print()
        elif b == 8:
            while len(s) % 3 != 0:
                s = "0" + s

            for i in range(0, len(s), 3):
                x = 4 * int(s[i]) + 2 * int(s[i + 1]) + int(s[i + 2])
                print(x, end="")
            print()
        else:
            while len(s) % 4 != 0:
                s = "0" + s
            
            for i in range(0, len(s), 4):
                x = 8 * int(s[i]) + 4 * int(s[i + 1]) + 2 * int(s[i + 2]) + int(s[i + 3])
                if x == 10:
                    print("A", end="")
                elif x == 11:
                    print("B", end="")
                elif x == 12:
                    print("C", end="")
                elif x == 13:
                    print("D", end="")
                elif x == 14:
                    print("E", end="")
                elif x == 15:
                    print("F", end="")
                else:
                    print(x, end="")
            print()
        t -= 1