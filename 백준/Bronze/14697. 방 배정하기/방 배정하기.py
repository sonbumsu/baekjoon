import sys
A, B, C, N = map(int, sys.stdin.readline().split())
def solve():
    for i in range(N // A + 1):
        for j in range(N // B + 1):
            for k in range(N // C + 1):
                if (A * i) + (B * j) + (C * k) == N:
                    return 1
    return 0
print(solve())