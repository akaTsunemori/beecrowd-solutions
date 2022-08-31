e = [float(i) for i in input().split()]

if e[0] < (e[1] + e[2]) and e[1] < (e[2] + e[0]) and e[2] < (e[1] + e[0]):
    print(f'Perimetro = {e[0] + e[1] + e[2]}')
else:
    print(f'Area = {(((e[0] + e[1]) * e[2]) / 2):.1f}')