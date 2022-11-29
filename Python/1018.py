a = int(input())
aInicial = a
cont100=0
cont50=0
cont20=0
cont10=0
cont5=0
cont2=0
cont1=0
while a>=100:
    a = a-100
    cont100 = cont100 + 1
while a>=50:
    a = a-50
    cont50 = cont50 + 1
while a>=20:
    a = a-20
    cont20 = cont20 + 1
while a>=10:
    a = a-10
    cont10 = cont10 + 1
while a>=5:
    a = a-5
    cont5 = cont5 + 1
while a>=2:
    a = a-2
    cont2 = cont2 + 1
while a>=1:
    a = a-1
    cont1 = cont1 + 1
print(f'{aInicial}')
print(f'{cont100} nota(s) de R$ 100,00')
print(f'{cont50} nota(s) de R$ 50,00')
print(f'{cont20} nota(s) de R$ 20,00')
print(f'{cont10} nota(s) de R$ 10,00')
print(f'{cont5} nota(s) de R$ 5,00')
print(f'{cont2} nota(s) de R$ 2,00')
print(f'{cont1} nota(s) de R$ 1,00')