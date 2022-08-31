operation = input()
matrix = []

i = 0
while i < 144:
    matrix.append(float(input()))
    i += 1

result = 0
left = 133
right = 143

while True:
    result += sum(matrix[left : right : 1])
    
    left -= 11
    right -= 13

    if left < 88:
        break

if operation == 'S':
    print(f'{(result):.1f}')

else:
    print(f'{(result / 30):.1f}')