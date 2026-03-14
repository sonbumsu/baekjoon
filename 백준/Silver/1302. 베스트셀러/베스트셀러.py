import sys
input = sys.stdin.read
data = input().split()
n = int(data[0])
books = data[1:]
book_counts = {}
for title in books:
    if title in book_counts:
        book_counts[title] += 1
    else:
        book_counts[title] = 1
max_val = max(book_counts.values())
best_sellers = []
for title, count in book_counts.items():
    if count == max_val:
        best_sellers.append(title)
best_sellers.sort()
print(best_sellers[0])