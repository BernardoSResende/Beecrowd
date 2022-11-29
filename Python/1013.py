a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)
maior = a
if (a >= b) and (a >= c):
    print(f'{a} eh o maior')
elif (b >= a) and (b >= c):
    print(f'{b} eh o maior')
elif (c >= a) and (c >= b):
    print(f'{c} eh o maior')
