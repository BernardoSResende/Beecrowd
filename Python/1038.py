a, b = input().split()
a = int(a)
b = int(b)

if a==1 :
    c = b*4.0
elif a==2 :
    c = b*4.5
elif a==3 :
    c = b*5.0
elif a== 4 :
    c = b*2.0
elif a==5 :
    c = b*1.5

print(f'Total: R$ {c:.2f}')