import sys
input_data = sys.stdin.read().split()
if input_data:
    n = float(input_data[0])
    result = n - 0.3
    print(f"{result:.4f}")