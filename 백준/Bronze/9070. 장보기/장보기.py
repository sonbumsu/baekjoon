import sys

def solve():
    input = sys.stdin.read().split()
    if not input:
        return
    
    idx = 0
    t = int(input[idx])
    idx += 1
    
    for _ in range(t):
        n = int(input[idx])
        idx += 1
        
        best_w = int(input[idx])
        best_c = int(input[idx+1])
        idx += 2
        
        for _ in range(n - 1):
            curr_w = int(input[idx])
            curr_c = int(input[idx+1])
            idx += 2
            
            if curr_w * best_c > best_w * curr_c:
                best_w, best_c = curr_w, curr_c
            elif curr_w * best_c == best_w * curr_c:
                if curr_c < best_c:
                    best_w, best_c = curr_w, curr_c
        
        print(best_c)

solve()