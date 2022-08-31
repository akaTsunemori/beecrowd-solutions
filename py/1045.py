def triangleTypes(a, b, c):
    if a >= (b + c):
        print('NAO FORMA TRIANGULO')
        return
        
    if a**2 == (b**2 + c**2):
        print('TRIANGULO RETANGULO')
        
    elif a**2 > (b**2 + c**2):
        print('TRIANGULO OBTUSANGULO')
        
    elif a**2 < (b**2 + c**2):
        print('TRIANGULO ACUTANGULO')
        
        
    if a == b == c:
        print('TRIANGULO EQUILATERO')
        
    elif a == b or a == c or b == c:
        print('TRIANGULO ISOSCELES')
        
triangle = list(map(float, input().split()))
h = max(triangle)
triangle.remove(h)
triangleTypes(h, triangle[0], triangle[1])