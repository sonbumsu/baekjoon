N, A, B = map(int, input().split())

good, bad = 1, 1  # 처음 길이

for _ in range(N):
    # 1. 성장
    good += A
    bad += B

    # 2. 역할 교체
    if good < bad:
        good, bad = bad, good  # 역할을 바꾼다

    # 3. 같으면 비난 양파 자르기
    elif good == bad:
        bad -= 1

print(good, bad)
