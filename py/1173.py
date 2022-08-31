arr = [int(input())]
for i in range(9): arr.append(arr[-1] * 2)

for i in range(len(arr)): print(f"N[{i}] = {arr[i]}")