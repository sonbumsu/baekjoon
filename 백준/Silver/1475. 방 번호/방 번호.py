import math

n = input()

count = [0] * 10

for char in n:
    count[int(char)] += 1

six_nine_sum = count[6] + count[9]
six_nine_sets = math.ceil(six_nine_sum / 2)

max_other = 0
for i in range(10):
    if i != 6 and i != 9:
        if count[i] > max_other:
            max_other = count[i]

print(max(max_other, six_nine_sets))