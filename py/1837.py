a, b = map(int, input().split())
flag = False

if b < 0:
    flag = True
    b *= -1

floor = a // b
remainder = a - b * floor

if flag:
    floor *= -1

print(floor, remainder)