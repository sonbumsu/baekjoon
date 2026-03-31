import sys

l, r, a = map(int, sys.stdin.readline().split())

diff = abs(l - r)

if a <= diff:
    print((min(l, r) + a) * 2)
else:
    remaining_a = a - diff
    print((max(l, r) + (remaining_a // 2)) * 2)