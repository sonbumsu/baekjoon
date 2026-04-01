import sys

def solve():
    try:
        line1 = sys.stdin.readline()
        if not line1:
            return
        n = int(line1.strip())
    except ValueError:
        return

    total_fee = 0

    for _ in range(n):
        data = sys.stdin.readline().split()
        if not data:
            break
        
        time_str, duration = data[0], int(data[1])
        hh, mm = map(int, time_str.split(':'))
        
        current_time = hh * 60 + mm
        
        for _ in range(duration):
            if 420 <= current_time < 1140:
                total_fee += 10
            else:
                total_fee += 5
            
            current_time += 1
            
            if current_time >= 1440:
                current_time %= 1440
                
    print(total_fee)

solve()