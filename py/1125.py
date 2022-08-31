while True:
    g, p = map(int, input().split())
    
    if g == 0 and p == 0:
        break
    
    results = []
    while g > 0:
        results.append([int(i) for i in input().split()])
        g -= 1
    
    s = int(input())
    while s > 0:
        points = [0 for i in range(p)]
        system = [int(i) for i in input().split()]

        for result in results:
            for i in range(len(result)):
                if result[i] <= system[0]:
                    points[i] += system[result[i]]



        winners = []
        for (i, item) in enumerate(points):
            if item == max(points):
                winners.append(i + 1)

        print(*winners)
        
        s -= 1