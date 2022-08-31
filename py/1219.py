while True:
    try:
        a, b, c = [int(i) for i in input().split()]
        PI = 3.1415926535897
        p = (a + b + c) / 2

        triangleArea = (p * (p - a) * (p - b) * (p - c)) ** 0.5
        innerCircleRadius = triangleArea / p
        innerCircleArea = PI * (innerCircleRadius ** 2)
        outerCircleRadius = (a * b * c) / (4 * triangleArea)
        outerCircleArea =   PI * (outerCircleRadius ** 2)

        sunflowers = outerCircleArea - triangleArea
        violets = triangleArea - innerCircleArea
        roses = innerCircleArea

        print(f'{(sunflowers):.4f} {(violets):.4f} {(roses):.4f}')

    except EOFError:
        break