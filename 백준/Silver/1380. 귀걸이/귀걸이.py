import sys

scenario = 1
while True:
    line = sys.stdin.readline().strip()
    if not line or line == '0':
        break
        
    n = int(line)
    names = []
    for _ in range(n):
        names.append(sys.stdin.readline().strip())
    is_missing = [False] * (n + 1)
        
    for _ in range(2 * n - 1):
        record = sys.stdin.readline().split()
        student_num = int(record[0])
        is_missing[student_num] = not is_missing[student_num]
    for i in range(1, n + 1):
        if is_missing[i]:
            print(f"{scenario} {names[i-1]}")
            break
        
    scenario += 1