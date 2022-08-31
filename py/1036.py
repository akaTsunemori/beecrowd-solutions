a, b, c = map(float, input().split())
delta = b * b - (4 * a * c)

if delta < 0 or a == 0:
    print('Impossivel calcular')
else:
    R1 = (-b + (delta ** (1/2))) / (2 * a)
    R2 = (-b - (delta ** (1/2))) / (2 * a)

    print('R1 =', round(R1, 5))
    print('R2 =', round(R2, 5))