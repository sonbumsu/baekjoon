n, h = map(int, input().split())

ride_heights = list(map(int, input().split()))

can_ride_count = 0
for height in ride_heights:
    if h >= height:
        can_ride_count += 1

print(can_ride_count)