import heapq
import math

def is_square(x):
    s = int(math.isqrt(x))
    return s * s == x

t = int(input())
for _ in range(t):
    n = int(input())
    total = n * (n + 1) // 2
    if is_square(total):
        print(-1)
        continue
    heap = [-i for i in range(n, 0, -1)]
    heapq.heapify(heap)
    current_sum = 0
    perm = []
    temp = []
    while heap:
        num = -heapq.heappop(heap)
        if is_square(current_sum + num):
            temp.append(num)
        else:
            perm.append(num)
            current_sum += num
            while temp:
                heapq.heappush(heap, -temp.pop())
    if len(perm) == n:
        print(' '.join(map(str, perm)))
    else:
        print(-1)