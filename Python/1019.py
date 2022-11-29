a = int(input())
cont_horas = 0
cont_minutos = 0

while a>=3600:
    a = a - 3600
    cont_horas = cont_horas + 1
while a>=60:
    a = a - 60
    cont_minutos = cont_minutos + 1
print(f'{cont_horas}:{cont_minutos}:{a}')