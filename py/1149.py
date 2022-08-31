arr = [int(i) for i in input().split()]
A, N = arr[0], arr[-1]
print(sum([A + i for i in range(N)]))