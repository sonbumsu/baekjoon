a ,c = map(int, input().split())
b = list(map(int, input().split()))
for i in range(a):
    if b[i] < c:
        print(b[i], end = ' ')