import sys
n = sys.stdin.readline().strip()
c = 0
while len(n) > 1:
    r = 1
    for d in n:
        r *= int(d)
    n = str(r)
    c += 1
print(c)