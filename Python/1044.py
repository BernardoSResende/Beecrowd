def bubbleSort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


a, b = input().split()
a = int(a)
b = int(b)
if ((b % a) == 0) | ((a % b) == 0):
    print(f'Sao Multiplos')
else:
    print(f'Nao sao Multiplos')