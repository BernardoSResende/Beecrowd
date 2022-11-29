numCasos = int(input())

for i in range(0, numCasos):
    jog1 = input()
    jog2 = input()
    if jog1 == 'ataque':
        index1 = 2
    elif jog1 == 'pedra':
        index1 = 1
    elif jog1 == 'papel':
        index1 = 0

    if jog2 == 'ataque':
        index2 = 2
    elif jog2 == 'pedra':
        index2 = 1
    elif jog2 == 'papel':
        index2 = 0

    if index1 == index2:
        if index1 == 0:
            print(f'Ambos venceram')
        elif index1 == 1:
            print(f'Sem ganhador')
        else:
            print(f'Aniquilacao mutua')

    elif index1>index2:
        print(f'Jogador 1 venceu')
    else:
        print(f'Jogador 2 venceu')
