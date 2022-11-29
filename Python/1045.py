def bubblesort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


a, b, c = input().split()
a = float(a)
b = float(b)
c = float(c)

arr = [a, b, c]

bubblesort(arr)

if not(((arr[0] + arr[1]) > arr[2]) & ((arr[2] - arr[1]) < arr[0])):
    print(f'NAO FORMA TRIANGULO')
else:
    if (arr[2]*arr[2]) == ((arr[1]*arr[1]) + (arr[0])*arr[0]):
        print(f'TRIANGULO RETANGULO')
    if (arr[2]*arr[2]) > ((arr[1]*arr[1]) + (arr[0])*arr[0]):
        print(f'TRIANGULO OBTUSANGULO')
    if (arr[2]*arr[2]) < ((arr[1]*arr[1]) + (arr[0])*arr[0]):
        print(f'TRIANGULO ACUTANGULO')
    if a == b == c:
        print(f'TRIANGULO EQUILATERO')
    elif (a == b) | (a == c) | (b == c):
        print(f'TRIANGULO ISOSCELES')
