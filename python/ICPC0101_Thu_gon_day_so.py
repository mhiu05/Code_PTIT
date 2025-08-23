import queue

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))

    q = queue.LifoQueue(10**5 + 5)

    for i in range(n):
        q.put(arr[i])

        if q.qsize() < 2:
            continue

        a = q.get()
        b = q.get()

        if (a + b) % 2 == 0:
            continue
        else:
            q.put(b)
            q.put(a)

    print(q.qsize())