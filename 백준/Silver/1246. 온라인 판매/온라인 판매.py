import sys
n, m = map(int, sys.stdin.readline().split())
p = []
for _ in range(m):
    p.append(int(sys.stdin.readline()))
p.sort()
mp = 0
bp = 0
for i in range(m):
    c = min(m - i, n)
    cp = p[i] * c
    if cp > mp:
        mp = cp
        bp = p[i]
print(bp, mp)