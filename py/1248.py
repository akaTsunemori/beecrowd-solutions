def dietPlan(diet, breakfast, lunch):
    dinner = []
    
    for i in breakfast:
        if i not in diet:
            print('CHEATER')
            return
        
    for i in lunch:
        if i not in diet:
            print('CHEATER')
            return
    
    for i in diet:
        if i not in breakfast and i not in lunch:
            dinner.append(i)
            
    dinner.sort()
    print(*dinner, sep='')

n = int(input())
for i in range(n):
    a, b, c = input(), input(), input()
    dietPlan(a, b, c)