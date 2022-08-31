n, s = map(int, input().split())

result = s
for i in range(n):
    operation = int(input())
    s += operation
    
    if s < result:
        result = s
        
print(result)