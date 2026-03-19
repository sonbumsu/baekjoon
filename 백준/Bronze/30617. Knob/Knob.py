import sys

input = sys.stdin.readline

def solve():
    T = int(input())
    
    total_fun = 0
    prev_l, prev_r = 0, 0
    
    for i in range(T):
        curr_l, curr_r = map(int, input().split())
        
        if curr_l != 0 and curr_r != 0 and curr_l == curr_r:
            total_fun += 1
            
        if i > 0:
            if curr_l != 0 and curr_l == prev_l:
                total_fun += 1
            if curr_r != 0 and curr_r == prev_r:
                total_fun += 1
        
        prev_l, prev_r = curr_l, curr_r

    print(total_fun)

solve()