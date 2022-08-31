def arrayHash(words):
    result = 0

    for word, i in words:
        for char in range(len(word)):
            result += (ord(word[char]) - 65) + char + i

    return result


n = int(input())

for _ in range(n):
    words = []
    count = 0
    l = int(input())

    for __ in range(l):
        words.append((input(), count))
        count += 1

    print(arrayHash(words))