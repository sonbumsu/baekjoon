import sys

# 테스트 케이스 개수 입력
t = int(sys.stdin.readline())

for _ in range(t):
    # 값과 단위를 입력받음 (예: 1 kg)
    data = sys.stdin.readline().split()
    value = float(data[0])
    unit = data[1]
    
    # 단위에 따른 변환 로직
    if unit == 'kg':
        result = value * 2.2046
        target_unit = 'lb'
    elif unit == 'lb':
        result = value * 0.4536
        target_unit = 'kg'
    elif unit == 'l':
        result = value * 0.2642
        target_unit = 'g'
    elif unit == 'g':
        result = value * 3.7854
        target_unit = 'l'
    
    # 소수점 4째자리까지 반올림하여 출력
    print(f"{result:.4f} {target_unit}")