# 15줄의 사진 데이터를 입력받음
colors = [input().split() for _ in range(15)]

# flatten: 2차원 리스트 → 1차원 리스트로 변환
flat = sum(colors, [])

# 조건에 따라 출력
if 'w' in flat:
    print("chunbae")
elif 'b' in flat:
    print("nabi")
elif 'g' in flat:
    print("yeongcheol")
