a = int(input())
cont_anos = 0
cont_meses = 0

while a>=365:
    a = a - 365
    cont_anos= cont_anos+ 1
while a>=30:
    a = a - 30
    cont_meses = cont_meses + 1
print(f'{cont_anos} ano(s)')
print(f'{cont_meses} mes(es)')
print(f'{a} dia(s)')