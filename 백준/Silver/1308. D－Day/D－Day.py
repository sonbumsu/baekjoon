import sys
def is_leap(y):
    if y % 400 == 0: return True
    if y % 100 == 0: return False
    if y % 4 == 0: return True
    return False
def get_month_days(y, m):
    days = [0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    if m == 2 and is_leap(y):
        return 29
    return days[m]
def total_days(y, m, d):
    total = 0
    for year in range(1, y):
        total += 366 if is_leap(year) else 365
    for month in range(1, m):
        total += get_month_days(y, month)
    total += d
    return total
y1, m1, d1 = map(int, sys.stdin.readline().split())
y2, m2, d2 = map(int, sys.stdin.readline().split())
is_gg = False
if y2 - y1 > 1000:
    is_gg = True
elif y2 - y1 == 1000:
    if m2 > m1:
        is_gg = True
    elif m2 == m1:
        if d2 >= d1:
            is_gg = True
if is_gg:
    print("gg")
else:
    diff = total_days(y2, m2, d2) - total_days(y1, m1, d1)
    print(f"D-{diff}")