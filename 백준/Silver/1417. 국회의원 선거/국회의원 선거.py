import heapq
import sys
n = int(sys.stdin.readline())
d = int(sys.stdin.readline())
o = []
for _ in range(n - 1):
    heapq.heappush(o, -int(sys.stdin.readline()))
c = 0

while o and d <= -o[0]:
    m = -heapq.heappop(o)
    m -= 1
    d += 1
    c += 1
    heapq.heappush(o, -m)
print(c)