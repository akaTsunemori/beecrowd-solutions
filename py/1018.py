value = int(input())

print(value)

notes = (100, 50, 20, 10, 5, 2, 1)
for note in notes:
    count = value // note

    print(f'{count} nota(s) de R$ {note},00')
    
    value -= note * count