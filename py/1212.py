while True:
    n = input().split()
    
    if n == ['0', '0']:
        break
    
    while len(n[0]) < len(n[1]):
        n[0] = '0' + n[0]
        
    while len(n[1]) < len(n[0]):
        n[1] = '0' + n[1]
    
    n0 = [i for i in n[0]]
    n1 = [i for i in n[1]]
    
    carry = 0
    carryOperations = 0
    
    while True:
        currentSum = int(n0[-1]) + int(n1[-1])
        
        if carry > 0:
            currentSum += carry
            carry = 0
        
        if currentSum > 9:
            carry += 1
            carryOperations += 1
            
        n0.pop(-1)
        n1.pop(-1)
        
        if len(n0) == 0 or len(n1) == 0:
            break
        
    if carryOperations > 1:
        print(f'{carryOperations} carry operations.')
        
    elif carryOperations == 1:
        print('1 carry operation.')
        
    else:
        print('No carry operation.')