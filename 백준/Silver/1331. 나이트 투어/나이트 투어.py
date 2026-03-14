import sys
def solve():
    p = [sys.stdin.readline().strip() for _ in range(36)]
    if len(set(p)) != 36:
        print("Invalid")
        return
    def is_valid_move(pos1, pos2):
        x1, y1 = ord(pos1[0]), int(pos1[1])
        x2, y2 = ord(pos2[0]), int(pos2[1])
        diff_x = abs(x1 - x2)
        diff_y = abs(y1 - y2)
        return (diff_x == 1 and diff_y == 2) or (diff_x == 2 and diff_y == 1)
    for i in range(35):
        if not is_valid_move(p[i], p[i+1]):
            print("Invalid")
            return
    if not is_valid_move(p[-1], p[0]):
        print("Invalid")
        return
    print("Valid")
solve()