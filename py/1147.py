xcoords = {'a': 0, 'b': 1, 'c': 2, 'd': 3, 'e': 4, 'f': 5, 'g': 6, 'h': 7}
d_x = [2, 1, -1, -2, -2, -1, 1, 2]
d_y = [1, 2, 2, 1, -1, -2, -2, -1]


def horse_moves(horse, pawns):
    h_x, h_y = horse
    result = 0
    for i in range(8):
        x = h_x + d_x[i]
        y = h_y + d_y[i]
        if x >= 0 and y >= 0 and x < 8 and y < 8:
            if not ((x + 1, y + 1) in pawns or
                    (x - 1, y + 1) in pawns):
                result += 1
    return result


def convert_position(pos) -> tuple:
    return (xcoords[pos[1]], int(pos[0]) - 1)


def main():
    i = 1
    horse = input()
    while horse != '0':
        horse = convert_position(horse)
        pawns = set()
        for _ in range(8):
            p = input()
            pawns.add(convert_position(p))
        print(f'Caso de Teste #{i}: {horse_moves(horse, pawns)} movimento(s).')
        i += 1
        horse = input()



if __name__ == '__main__':
    main()
