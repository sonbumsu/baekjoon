import sys

# 1. 다섯 개의 숫자를 입력받아 리스트에 저장
numbers = []
for _ in range(5):
    numbers.append(int(sys.stdin.readline()))

# 2. 평균 계산 (합계 / 5)
average = sum(numbers) // 5

# 3. 중앙값 계산 (정렬 후 가운데 인덱스)
numbers.sort()
median = numbers[2]

# 4. 결과 출력
print(average)
print(median)