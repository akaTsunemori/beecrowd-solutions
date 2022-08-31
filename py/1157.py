n = int(input())

count = 1
while count != n + 1:
    if n % count == 0:
        print(count)
        
    count += 1