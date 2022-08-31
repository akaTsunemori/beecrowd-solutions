operation = input()
matrix = []

i = 0
while i < 144:
    matrix.append(float(input()))
    i += 1

result = 0
left = 1
right = 11

while True:
    result += sum(matrix[left : right : 1])
    
    left += 1 + 12
    right += 12 - 1

    if left == 66:
        break

if operation == 'S':
    print(f'{(result):.1f}')

else:
    print(f'{(result / 30):.1f}')