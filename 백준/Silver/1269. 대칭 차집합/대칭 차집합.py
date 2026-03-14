import sys
input = sys.stdin.read
data = input().split()
n, m = map(int, data[:2])
set_a = set(map(int, data[2:2+n]))
set_b = set(map(int, data[2+n:]))
result = len(set_a ^ set_b)
print(result)