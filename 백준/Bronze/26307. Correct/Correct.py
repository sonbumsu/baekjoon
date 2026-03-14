import sys
hh, mm = map(int, sys.stdin.readline().split())
result = (hh - 9) * 60 + mm
print(result)