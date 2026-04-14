import sys

t = int(sys.stdin.readline())

for _ in range(t):
    n, m = map(int, sys.stdin.readline().split())
    
    s = n - m
    u = m - s
    
    print(u, s)