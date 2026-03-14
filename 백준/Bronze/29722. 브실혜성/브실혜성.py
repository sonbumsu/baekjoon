import sys

s = sys.stdin.readline().strip()   # yyyy-mm-dd
N = int(sys.stdin.readline().strip())

yyyy, mm, dd = map(int, s.split('-'))

# 현재 날짜를 0부터 시작하는 총 일수로 변환
total_days = yyyy * 360 + (mm - 1) * 30 + (dd - 1)

# N일 주기이므로 다음 관측은 오늘 이후 가장 빠른 날짜 = total_days + N
new_total = total_days + N

# 다시 연/월/일로 변환
new_year = new_total // 360
rem = new_total % 360
new_month = rem // 30 + 1
new_day = rem % 30 + 1

# 출력: yyyy-mm-dd (연도는 최소 4자리로 0채움)
print(f"{new_year:04d}-{new_month:02d}-{new_day:02d}")
