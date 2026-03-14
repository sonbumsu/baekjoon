a = int(input())
d = []
for i in range(a):
    b, c = input().split(' ')
    d.append(int(b) + int(c))
for i in d:
    print(i)