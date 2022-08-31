n = int(input())
numbers = []
each = set()

while n > 0:
    number = int(input())
    numbers.append(number)
    each.add(number)
    n -= 1
    
each = sorted(each)

for i in each:
    print(f'{i} aparece {numbers.count(i)} vez(es)')