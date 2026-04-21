import sys

R, C = map(int, sys.stdin.readline().split())

grid = [list(sys.stdin.readline().strip()) for _ in range(R)]

results = [0] * 5

for i in range(R - 1):
    for j in range(C - 1):
        cells = [
            grid[i][j], grid[i][j+1],
            grid[i+1][j], grid[i+1][j+1]
        ]
        
        if '#' in cells:
            continue
        
        car_count = cells.count('X')
        results[car_count] += 1

for count in results:
    print(count)