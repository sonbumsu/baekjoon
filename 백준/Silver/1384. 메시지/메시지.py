import sys

group_count = 1

while True:
    line = sys.stdin.readline().split()
    if not line: break
    
    n = int(line[0])
    if n == 0: break
    
    if group_count > 1:
        print()
    print(f"Group {group_count}")
    
    data = []
    for _ in range(n):
        data.append(sys.stdin.readline().split())
        
    has_nasty = False
    
    for i in range(n):
        name_b = data[i][0]
        messages = data[i][1:]
        
        for j in range(len(messages)):
            if messages[j] == 'N':
                has_nasty = True
                speaker_idx = (i - (j + 1) + n) % n
                name_a = data[speaker_idx][0]
                print(f"{name_a} was nasty about {name_b}")
                
    if not has_nasty:
        print("Nobody was nasty")
        
    group_count += 1