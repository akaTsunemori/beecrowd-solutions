def helpGirafales(signatures, attendance):
    fakeSignatures = 0
    for name, signature in attendance:
        if name in signatures:
            count = sum(1 for a, b in zip(signature, signatures[name]) if a != b)
            
            if count > 1:
                fakeSignatures += 1
                
    print(fakeSignatures)

while True:
    n = int(input())
    
    if n == 0:
        break
    
    signatures = dict()
    
    while n > 0:
        tmp = input().split()
        signatures[tmp[0]] = tmp[1]
        n -= 1
        
    m = int(input())
    attendance = []
    
    while m > 0:
        attendance.append(input().split())
        m -= 1
    
    helpGirafales(signatures, attendance)