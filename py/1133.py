numbers = int(input()), int(input())

for i in range(min(numbers) + 1, max(numbers)):
    if i % 5 == 2 or i % 5 == 3:
        print(i)