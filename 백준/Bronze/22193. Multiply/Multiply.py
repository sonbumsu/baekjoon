import sys

sys.set_int_max_str_digits(100005)

def solve():
    try:
        line1 = sys.stdin.readline().split()
        if not line1: return
        n, m = map(int, line1)
        
        a = int(sys.stdin.readline().strip())
        b = int(sys.stdin.readline().strip())
        
        print(a * b)
    except EOFError:
        pass

solve()