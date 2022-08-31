from sys import stdin

def factorial(number):
    if number == 1 or number == 0:
        return 1

    return number * factorial(number - 1)

for line in stdin:
    M, N = map(int, line.split())
    print(sum(map(factorial, (M, N))))