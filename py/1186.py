operation = input()
matrix = []

i = 0
while i < 144:
    matrix.append(float(input()))
    i += 1

result = 0
index = 23
step = 0

while True:
    result += sum(matrix[index : index - step - 1 : -1])
    
    index += 12
    step += 1
    
    if step == 11:
        break
    
if operation == 'S':
    print(f'{(result):.1f}')

else:
    print(f'{(result / 66):.1f}')