operation = input()
matrix = []

i = 0
while i < 144:
    matrix.append(float(input()))
    i += 1

result = 0
index = 12
step = 1
switch = 2

while True:
    result += sum(matrix[index : index + step : 1])
    
    index += 12

    if switch == 2:
        step += 1
        
    elif switch == 0:
        step -= 1

    if step == 5:
        switch -= 1

    if step == -1:
        break

if operation == 'S':
    print(f'{(result):.1f}')

else:
    print(f'{(result / 30):.1f}')