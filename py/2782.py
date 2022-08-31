n = int(input())
sequence = [int(i) for i in input().split()]

stepladders = 1
for i in range(1, n - 1):
    if sequence[i] - sequence[i - 1] != sequence[i + 1] - sequence[i]:
        stepladders += 1
        
print(stepladders)