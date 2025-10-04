import sys

input = sys.stdin.readline

if __name__ == "__main__":
    mp = {}

    n = int(input())
    for _ in range(n):
        s = input().strip().lower()

        tmp = ''
        for c in s:
            if ('a' <= c <= 'z') or ('0' <= c <= '9'):
                tmp += c
            else: 
                tmp += ' '

        words = tmp.split()

        for word in words:
            mp[word]= mp.get(word, 0) + 1

    res = sorted(mp.items(), key=lambda x: (-x[1], x[0]))
    for word, cnt in res:
        print(f"{word} {cnt}")

        