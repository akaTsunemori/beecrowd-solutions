values = [int(i) for i in input().split()]
sortedValues = values.copy()
sortedValues.sort()

for number in sortedValues: print(number)
print('')
for number in values: print(number)