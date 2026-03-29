a, b, x, y = map(int, input().split())

dist_direct = abs(a - b)
dist_tele_1 = abs(a - x) + abs(b - y)
dist_tele_2 = abs(a - y) + abs(b - x)

print(min(dist_direct, dist_tele_1, dist_tele_2))