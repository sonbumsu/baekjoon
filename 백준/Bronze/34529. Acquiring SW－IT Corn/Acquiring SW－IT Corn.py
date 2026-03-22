import sys

def solve():
    x, y, z = map(int, sys.stdin.readline().split())
    
    u, v, w = map(int, sys.stdin.readline().split())
    
    cost_a = (u // 100) * x
    cost_b = (v // 50) * y
    cost_c = (w // 20) * z
    
    print(cost_a + cost_b + cost_c)

solve()