A, B = map(int, input().split())
C, D = map(int, input().split())
hanyang_total = A + C
yongdap_total = B + D
if hanyang_total < yongdap_total:
    print("Hanyang Univ.")
elif yongdap_total < hanyang_total:
    print("Yongdap")
else:
    print("Either")