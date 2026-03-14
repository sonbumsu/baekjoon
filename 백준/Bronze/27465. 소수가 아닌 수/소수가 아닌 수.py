import sys
n = int(sys.stdin.readline())
if n == 1:
    print(1)
elif n == 2:
    print(4)
else:
    if n % 2 == 0:
        print(n)
    else:
        print(n + 1)