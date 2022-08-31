def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a%b)

n = int(input())
count = 0
while count < n:
    deck1, deck2 = map(int, input().split())
    print(gcd(deck1, deck2))

    count += 1