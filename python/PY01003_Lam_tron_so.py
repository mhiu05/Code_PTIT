def round(i): 
    if i >= 5: 
        return 1
    else: 
        return 0

if __name__ == "__main__":
    for t in range(int(input())):
        arr=[int(x) for x in input()]

        for i in range(len(arr) - 1, 0, -1):
            arr[i-1] += round(arr[i])
            arr[i] = 0

        print(''.join(map(str, arr)))