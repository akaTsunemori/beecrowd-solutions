lines = int(input())
columns = int(input())

if lines % 2 == 0 and columns % 2 == 0:
    print(1)
    
elif lines % 2 != 0 and columns % 2 == 0:
    print(0)
    
elif lines % 2 == 0 and columns % 2 != 0:
    print(0)

else:
    print(1)