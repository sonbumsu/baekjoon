import sys

input = sys.stdin.read
data = input().split()

P = int(data[0])
idx = 1

for _ in range(P):
    K = int(data[idx])
    N = int(data[idx+1])
    idx += 2
    
    S1 = N * (N + 1) // 2
    S2 = N * N
    S3 = N * (N + 1)
    
    print(f"{K} {S1} {S2} {S3}")