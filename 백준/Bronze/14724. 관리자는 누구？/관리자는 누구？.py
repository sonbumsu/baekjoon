import sys
c = [
    "PROBRAIN", "GROW", "ARGOS", "ADMIN", "ANT", 
    "MOTION", "SPG", "COMON", "ALMIGHTY"
]
n = int(sys.stdin.readline())
cs = []
for _ in range(9):
    s = list(map(int, sys.stdin.readline().split()))
    cs.append(max(s))
f = max(cs)
w = cs.index(f)
print(c[w])