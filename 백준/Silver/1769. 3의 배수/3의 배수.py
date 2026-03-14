import sys
def solve():
    X = sys.stdin.readline().strip()
    count = 0
    while len(X) > 1:
        count += 1
        current_sum = 0
        for digit in X:
            current_sum += int(digit)
        X = str(current_sum)
    print(count)
    if int(X) % 3 == 0:
        print("YES")
    else:
        print("NO")
if __name__ == "__main__":
    solve()