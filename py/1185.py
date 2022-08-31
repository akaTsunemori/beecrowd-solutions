operation = input()
matrix = []

i = 0
while i < 144:
    matrix.append(float(input()))
    i += 1
    
result = 0
index = 0
step = 10

while True:
    result += sum(matrix[index : index + step + 1])
    
    index += 12
    step -= 1
    
    if step == -1:
        break
    
if operation == 'S':
    print(f'{(result):.1f}')

else:
    print(f'{(result / 66):.1f}')