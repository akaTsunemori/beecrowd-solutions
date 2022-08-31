from math import ceil
from collections import deque
 
def main():
    n, m = [int(i) for i in input().split()]
    d = deque([int(i) for i in input().split()])
    d_sum = sum(d)
    count = 0
    aux = 0
    aux_count = 0
    current = 0
    flag = False

    while n < m:
        aux = ceil(d_sum / 30)

        if current != aux:
            aux_count = 0
            current = aux

        if aux_count == 50:
            flag = True
            break

        d.append(aux)
        n += aux
        d_sum += aux - d.popleft()
        count += 1
        aux_count += 1

    if flag:
        count += ceil((m - n) / aux)

    print(count)


main()