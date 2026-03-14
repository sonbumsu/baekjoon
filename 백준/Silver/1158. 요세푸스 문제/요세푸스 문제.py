import sys
from collections import deque
n, k = map(int, sys.stdin.readline().split())
q = deque(range(1, n + 1))
r = []
while q:
    for _ in range(k - 1):
        q.append(q.popleft())
    r.append(str(q.popleft()))
print("<" + ", ".join(r) + ">")