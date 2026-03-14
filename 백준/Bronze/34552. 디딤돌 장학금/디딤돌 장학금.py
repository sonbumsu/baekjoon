import sys
m = list(map(int, sys.stdin.readline().split()))
n = int(sys.stdin.readline())
t = 0
for _ in range(n):
    line = sys.stdin.readline().split()
    b = int(line[0])
    l = float(line[1])
    s = int(line[2])
    if l >= 2.0 and s >= 17:
        t += m[b]
print(t)