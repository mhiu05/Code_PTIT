def convert(s):
    res = ""
    for i in range(len(s)):
        res += s[i].lower()
    return res

if __name__ == "__main__":
    n = int(input())

    mp = {}
    for i in range(n):
        line = input().strip()
        word = ""
        for ch in line:
            if ch.isalnum():  # chữ cái hoặc chữ số
                word += ch
            else:
                # Kết thúc từ hiện tại
                if word:
                    # Loại bỏ chữ số
                    cleaned = ''.join([c for c in word if c.isalpha()])
                    if cleaned:
                        cleaned_lower = convert(cleaned)
                        mp[cleaned_lower] = mp.get(cleaned_lower, 0) + 1
                    word = ""
        # Xử lý từ cuối dòng (nếu có)
        if word:
            cleaned = ''.join([c for c in word if c.isalpha()])
            if cleaned:
                cleaned_lower = convert(cleaned)
                mp[cleaned_lower] = mp.get(cleaned_lower, 0) + 1

    # Sắp xếp
    words_list = sorted(mp.items(), key=lambda x: (-x[1], x[0]))

    for word, count in words_list:
        print(f"{word} {count}")