import sys

def solve():
    input_data = sys.stdin.read().split()
    
    if not input_data:
        return

    n = int(input_data[0])
    original_text = input_data[1]
    pupil_text = input_data[2]
    
    correct_count = 0
    
    for i in range(n):
        if original_text[i] == pupil_text[i]:
            correct_count += 1
            
    print(correct_count)

solve()