arr = []
while len(arr) < 10:
    arr.append(int(input()))
    if arr[-1] <= 0: arr[-1] = 1
    
for i in range(len(arr)):
    print(f"X[{i}] = {arr[i]}")