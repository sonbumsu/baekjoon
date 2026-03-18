day = int(input())

cars = list(map(int, input().split()))

violation_count = 0
for car_num in cars:
    if car_num == day:
        violation_count += 1

print(violation_count)