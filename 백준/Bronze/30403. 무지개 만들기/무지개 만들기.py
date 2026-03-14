N = int(input())
s = input()

rainbow_lower = set("roygbiv")
rainbow_upper = set("ROYGBIV")

has_lower = all(c in s for c in rainbow_lower)
has_upper = all(c in s for c in rainbow_upper)

if has_lower and has_upper:
    print("YeS")
elif has_lower:
    print("yes")
elif has_upper:
    print("YES")
else:
    print("NO!")
