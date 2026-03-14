import sys
def solve():
    s = sys.stdin.read().strip()
    if not s:
        return
    n = int(s)
    c = '7' in s
    d = (n % 7 == 0)
    if not c and not d:
        print(0)
    elif not c and d:
        print(1)
    elif c and not d:
        print(2)
    else:
        print(3)
solve()