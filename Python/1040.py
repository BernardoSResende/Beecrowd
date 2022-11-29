a, b, c, d = input().split()
a = float(a)
b = float(b)
c = float(c)
d = float(d)

media = ((a*2) + (b*3) + (c*4) + d)/10

print(f'Media: {media:.1f}')
if media >= 7.0:
    print(f'Aluno aprovado.')
elif media >= 5.0:
    print(f'Aluno em exame.')
    notaF = float(input())
    mediaF = (media + notaF)/2.0
    print(f'Nota do exame: {notaF:.1f}')
    if mediaF >= 5.0:
        print(f'Aluno aprovado.')
    else:
        print(f'Aluno reprovado.')
    print(f'Media final: {mediaF:.1f}')
else:
    print(f'Aluno reprovado.')