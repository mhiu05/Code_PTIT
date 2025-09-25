def convert(s):
    res = ""
    for i in range(len(s)):
        res += s[i].lower()
    return res

if __name__ == "__main__":
    n, k = map(int, input().split())

    mp = {}
    for i in range(n):
        S = input().split()
        for s in S:
            tmp = s 
            # Thay thế dấu câu bằng khoảng trắng
            for x in [',', '.', '?', '!', ':', ';', '-', '/', '(', ')']:
                tmp = tmp.replace(x, ' ')
            
            # Tách thành các từ sau khi thay dấu câu
            tmp1 = tmp.split()
            for word in tmp1:
                tmp2 = convert(word)
                if tmp2 not in mp:
                    mp[tmp2] = 1 
                else:
                    mp[tmp2] += 1
                
    # Lọc các từ có tần suất >= k
    words = [(word, count) for word, count in mp.items() if count >= k]
    
    # Số lần giảm dần, nếu bằng nhau thì từ điển tăng dần
    words.sort(key=lambda x: (-x[1], x[0]))
    
    # In kết quả
    for word, count in words:
        print(f"{word} {count}")