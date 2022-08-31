while True:
    n, b = map(int, input().split())
    
    if n == 0 and b == 0:
        break
    
    bag = [int(i) for i in input().split()]
    calls = set()

    for i in range(b):
        for j in range(i, b):
            calls.add(abs(bag[i] - bag[j]))

    if len(calls) >= n + 1:
        print('Y')
    
    else:
        print('N')