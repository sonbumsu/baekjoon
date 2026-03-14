import sys
X = int(sys.stdin.readline())
l = 1
while X > l:
    X -= l
    l += 1
if l % 2 == 0:
    n = X
    d = l - X + 1
else:
    n = l - X + 1
    d = X
print(f"{n}/{d}")