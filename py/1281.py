n = int(input())

while n > 0:
    items = dict()
    values = []

    m = int(input())
    
    while m > 0:
        item, price = input().split()
        price = float(price)

        items[item] = price
        m -= 1

    p =int(input())

    while p > 0:
        item, quantity = input().split()
        quantity = int(quantity)

        values.append(items[item] * quantity)

        p -= 1

    print(f'R$ {(sum(values)):.2f}')

    n -= 1