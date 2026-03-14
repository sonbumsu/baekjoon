import math
import sys
if hasattr(sys, 'set_int_max_str_digits'):
    sys.set_int_max_str_digits(1000000)
def solve():
    line = sys.stdin.readline().strip()
    if not line:
        return
    n = int(line)
    print(math.factorial(n))
if __name__ == "__main__":
    solve()