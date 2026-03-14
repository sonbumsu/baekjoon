import sys
n = int(sys.stdin.readline())
g = 0
for _ in range(n):
    w = sys.stdin.readline().strip()
    v = []
    ig = True
    for i in range(len(w)):
        if w[i] not in v:
            v.append(w[i])
        elif w[i] != w[i-1]:
            ig = False
            break
    if ig:
        g += 1
print(g)