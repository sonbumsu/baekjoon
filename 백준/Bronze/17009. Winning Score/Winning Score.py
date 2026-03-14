a = 0
b = 0
c = int(input())
a += c * 3
c = int(input())
a += c * 2
c = int(input())
a += c
c = int(input())
b += c * 3
c = int(input())
b += c * 2
c = int(input())
b += c
if a > b : print('A')
elif a < b : print('B')
else : print('T')