import math

a,b = input().split()
c,d = input().split()
a = float(a)
b = float(b)
c = float(c)
d = float(d)
dist = math.sqrt((c - a)**2 + (d - b)**2)

print(f'{dist:.4f}')
