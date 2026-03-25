import sys

def round_traditional(val):
    return int(val + 0.5) if val >= 0 else int(val - 0.5)

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    n = int(input_data[0])
    
    if n == 0:
        print(0)
        return

    opinions = sorted(map(int, input_data[1:]))
    
    trim_count = round_traditional(n * 0.15)
    
    if trim_count > 0:
        trimmed_data = opinions[trim_count:-trim_count]
    else:
        trimmed_data = opinions
    
    if not trimmed_data:
        print(0)
    else:
        avg = sum(trimmed_data) / len(trimmed_data)
        print(round_traditional(avg))

solve()