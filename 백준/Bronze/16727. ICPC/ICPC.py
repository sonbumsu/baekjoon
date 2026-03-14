import sys
p1, s1 = map(int, sys.stdin.readline().split())
s2, p2 = map(int, sys.stdin.readline().split())
total_p = p1 + p2
total_s = s1 + s2
if total_p > total_s:
    print("Persepolis")
elif total_s > total_p:
    print("Esteghlal")
else:
    if p2 > s1:
        print("Persepolis")
    elif s1 > p2:
        print("Esteghlal")
    else:
        print("Penalty")