n = int(input())
for _ in range(n):
    p, t = map(int, input().split())
    result = p + (t // 4) - (t // 7)
    print(result)
