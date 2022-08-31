q, e = map(int, input().split())

last2Days = {int(i) for i in input().split()}

lastWeek = []
while q > 0:
    lastWeek.append(int(input()))
    q -= 1
    
for i in lastWeek:
    if i in last2Days:
        print(0)
    
    else:
        print(1)
        last2Days.add(i)