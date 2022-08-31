def main(s):
    vowels = 'aeiouAEIOU'
    c = 0

    for i in range(len(s)):
        if not s[i] in vowels:
            c += 1

        else:
            c = 0

        if c == 3:
            return True

    return False


n = int(input())

for _ in range(n):
    s = input()

    if main(s):
        print(s, 'nao eh facil')

    else:
        print(s, 'eh facil')