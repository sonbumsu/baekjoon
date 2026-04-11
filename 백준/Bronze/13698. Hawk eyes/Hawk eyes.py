import sys

def solve():
    shuffles = sys.stdin.readline().strip()
    
    small_ball = 1
    big_ball = 4
    
    swaps = {
        'A': (1, 2),
        'B': (1, 3),
        'C': (1, 4),
        'D': (2, 3),
        'E': (2, 4),
        'F': (3, 4)
    }
    
    for char in shuffles:
        pos1, pos2 = swaps[char]
        
        if small_ball == pos1:
            small_ball = pos2
        elif small_ball == pos2:
            small_ball = pos1
            
        if big_ball == pos1:
            big_ball = pos2
        elif big_ball == pos2:
            big_ball = pos1

    print(small_ball)
    print(big_ball)

solve()