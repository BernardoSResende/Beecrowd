def bubbleSort(arr):
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

bubbleSort(arr)

if((arr[0] + arr[1]) > arr[2]) & ((arr[2] - arr[1]) < arr[0]):
    print(f'Perimetro = {a + b + c:.1f}')
else:
    print(f'Area = {(a + b)*c/2:.1f}')