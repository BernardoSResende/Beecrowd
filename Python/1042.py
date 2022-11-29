def bubbleSort(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]


a, b, c = input().split()
a = int(a)
b = int(b)
c = int(c)

arr = [a,b,c]

bubbleSort(arr)

print(f'{arr[0]}\n{arr[1]}\n{arr[2]}\n\n{a}\n{b}\n{c}')