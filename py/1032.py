from sys import setrecursionlimit

setrecursionlimit(10**5)


def loadPrimes(n):
    prime = [True for i in range(n + 1)]
    p = 2

    while (p * p <= n):
        if (prime[p] == True):

            for i in range(p ** 2, n + 1, p):

                prime[i] = False
        p += 1

    prime[0] = False
    prime[1] = False

    primes = [i for i in range(n + 1) if prime[i] == True]

    return primes


def josephus(n, k, primes):
    if n == 1:
        return 1

    else:
        return (josephus(n - 1, k + 1, primes) + primes[k] - 1) % n + 1


primes = loadPrimes(32625)

while True:
    n = int(input())

    if n == 0:
        break

    print(josephus(n, 0, primes))