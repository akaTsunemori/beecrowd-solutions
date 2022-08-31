n = int(input())

numbers = []
while n > 0:
    numbers.append(int(input()))
    n -= 1

even = [i for i in numbers if i % 2 == 0]
odd = [i for i in numbers if i % 2 != 0]

even.sort()
odd.sort(reverse=True)

print(*even, sep='\n')
print(*odd, sep='\n')