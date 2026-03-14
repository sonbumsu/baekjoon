import sys
n, l, w, h = map(int, sys.stdin.readline().split())
low = 0
high = max(l, w, h)
for _ in range(100):
    mid = (low + high) / 2
    count = (l // mid) * (w // mid) * (h // mid)
    if count >= n:
        low = mid
    else:
        high = mid
print(f"{low:.10f}")