def suerte(n):
    for i in range(len(n) - 1):
        if n[i] == '1' and n[i + 1] == '3':
            return False

    return True


n = input()
print(n, 'NO ' * suerte(n) + 'es de Mala Suerte')