yo = [int(input()), int(input()), int(input())]

monica = max(yo)
yo.remove(monica)

missingAge = monica - (yo[0] + yo[1])
yo.append(missingAge)

print(max(yo))