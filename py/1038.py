item = [int(i) for i in input().split()]

prices = [4, 4.5, 5, 2, 1.5]

print(f'Total: R$ {(prices[item[0] - 1] * item[1]):.2f}')