import sys

n, m = map(int, sys.stdin.readline().split())

grid = [[0] * 101 for _ in range(101)]

for _ in range(n):
    x1, y1, x2, y2 = map(int, sys.stdin.readline().split())
    
    for i in range(x1, x2 + 1):
        for j in range(y1, y2 + 1):
            grid[i][j] += 1

invisible_count = 0
for i in range(1, 101):
    for j in range(1, 101):
        if grid[i][j] > m:
            invisible_count += 1

print(invisible_count)