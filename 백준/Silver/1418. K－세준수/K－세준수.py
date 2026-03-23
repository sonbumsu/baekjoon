import sys

n = int(sys.stdin.readline())
k = int(sys.stdin.readline())

max_prime = [0] * (n + 1)

for i in range(2, n + 1):
    if max_prime[i] == 0:
        for j in range(i, n + 1, i):
            max_prime[j] = i

count = 0
for i in range(1, n + 1):
    if max_prime[i] <= k:
        count += 1

print(count)