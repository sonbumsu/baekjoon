import sys
def solve():
    case_num = 1
    input_data = sys.stdin.read().split()
    idx = 0
    while idx < len(input_data):
        n = int(input_data[idx])
        if n == 0:
            break
        idx += n + 1
        print(f"Case {case_num}: Sorting... done!")
        case_num += 1
if __name__ == "__main__":
    solve()