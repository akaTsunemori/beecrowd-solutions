#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<int, int> numbers;
    int n, number;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> number;

        if (numbers.find(number) == numbers.end()) {
            numbers[number] = 0;
        }

        numbers[number]++;
    }

    for (auto const pair: numbers) {
        cout << pair.first << " aparece " << pair.second << " vez(es)" << '\n';
    }

    return 0;
}