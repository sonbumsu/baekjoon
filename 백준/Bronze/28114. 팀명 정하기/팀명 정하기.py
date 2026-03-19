import sys

players = []

for _ in range(3):
    p, y, s = sys.stdin.readline().split()
    players.append([int(p), int(y) % 100, s[0]])

method1_list = sorted([p[1] for p in players])
method1 = "".join(map(str, method1_list))

method2_list = sorted(players, key=lambda x: x[0], reverse=True)
method2 = "".join([p[2] for p in method2_list])

print(method1)
print(method2)