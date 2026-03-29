import sys

n = int(sys.stdin.readline())

for _ in range(n):
    estimate = sys.stdin.readline().strip()
    
    print(len(estimate))