a = int(input())
for i in range(a):
    b = list(input().split())
    for j in range(2, len(b)):
        print(b[j], end = ' ')
    print(b[0], b[1])