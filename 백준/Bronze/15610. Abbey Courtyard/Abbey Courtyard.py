import math
import sys

def solve():
    line = sys.stdin.read().strip()
    if not line:
        return
    a = int(line)
    side_length = math.sqrt(a)
    total_length = 4 * side_length
    print(f"{total_length:.10f}")
if __name__ == "__main__":
    solve()