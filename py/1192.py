tmp = 0
result = []
count = int(input())
for i in range(count):
    a, b, c = input()
    a, c = int(a), int(c)
    
    if a == c:
        tmp = a * c

    elif ord(b) >= 65 and ord(b) <= 90:
        tmp = c - a
        
    else:
        tmp = a + c
        
    result.append(tmp)
    tmp = 0
    
for i in result: print(i)