a = int(input())
for i in range(a):
    c = 0
    b = input().split()
    for j in b:
        c += int(j)
    print(c)