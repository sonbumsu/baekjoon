a = input()
b = input()
a_a = b_a = 0
for i in a:
    if i == 'a':
        a_a += 1
for j in b:
    if j == 'a':
        b_a += 1
if a_a >= b_a:
    print('go')
else:
    print('no')