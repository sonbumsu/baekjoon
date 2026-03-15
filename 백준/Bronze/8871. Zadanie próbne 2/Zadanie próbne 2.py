import sys
def solve():
    line = sys.stdin.read().strip()
    if not line:
        return
    n = int(line)
    total_rounds = n + 1
    min_tasks = total_rounds * 2
    max_tasks = total_rounds * 3
    print(f"{min_tasks} {max_tasks}")
solve()