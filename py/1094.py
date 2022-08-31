from sys import stdin

cases = []
count = int(stdin.readline())
while count > 0:
    cases.append(list(stdin.readline().split()))
    count -= 1

rabbits = 0
rats = 0
frogs = 0
for c in cases:
    c[0] = int(c[0])
    
    if c[-1] == 'C':
        rabbits += c[0]
    elif c[-1] == 'R':
        rats += c[0]
    else:
        frogs += c[0]
        
total = rabbits + rats + frogs

print(f'Total: {total} cobaias')
print(f'Total de coelhos: {rabbits}')
print(f'Total de ratos: {rats}')
print(f'Total de sapos: {frogs}')
print(f'Percentual de coelhos: {(rabbits / total * 100):.2f} %')
print(f'Percentual de ratos: {(rats / total * 100):.2f} %')
print(f'Percentual de sapos: {(frogs / total * 100):.2f} %')