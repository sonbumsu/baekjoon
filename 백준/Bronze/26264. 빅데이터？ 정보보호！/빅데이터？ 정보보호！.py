import sys

n = int(sys.stdin.readline())

data = sys.stdin.readline().strip()

bigdata_count = data.count("bigdata")
security_count = data.count("security")

if bigdata_count > security_count:
    print("bigdata?")
elif security_count > bigdata_count:
    print("security!")
else:
    print("bigdata? security!")