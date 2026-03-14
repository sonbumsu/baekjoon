import sys
n = int(sys.stdin.readline())
if n**2 <= 100000000:
    print("Accepted")
else:
    print("Time limit exceeded")