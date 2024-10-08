import queue

if __name__ == "__main__":
    n = int(input())
    q = queue.LifoQueue(maxsize=10**5 + 5)
    array = list(map(int, input().split()))
    for i in range(n):
        x = array[i]
        q.put(x)
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
