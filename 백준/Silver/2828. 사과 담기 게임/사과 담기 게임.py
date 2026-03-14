import sys
n, m = map(int, sys.stdin.readline().split())
j = int(sys.stdin.readline())
l = 1
r = m
d = 0
for _ in range(j):
    a = int(sys.stdin.readline())
    if a > r:
        move = a - r
        d += move
        r = a
        l += move
    elif a < l:
        move = l - a
        d += move
        l = a
        r -= move
print(d)