import sys
A, B = sys.stdin.readline().split()
min_diff = 50
for i in range(len(B) - len(A) + 1):
    diff = 0
    for j in range(len(A)):
        if A[j] != B[i + j]:
            diff += 1
    if diff < min_diff:
        min_diff = diff
print(min_diff)