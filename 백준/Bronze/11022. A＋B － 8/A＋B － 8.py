a = int(input())
for i in range(1, a + 1):
    b, c = input().split()
    print(f'Case #{i}: {b} + {c} = {int(b) + int(c)}')