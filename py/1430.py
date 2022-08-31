def main():
    while True:
            notes = {
                'W': 1000000,
                'H': 500000,
                'Q': 250000,
                'E': 125000,
                'S': 62500,
                'T': 31250,
                'X': 15625
            }

            song = input().split('/')
            count = 0

            if song == ['*']:
                break

            for compass in song:
                compass_sum = 0

                for note in compass:
                    compass_sum += notes[note]

                if compass_sum == 1000000:
                    count += 1

            print(count)


main()