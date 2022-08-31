#include <iostream>

using namespace std;

int main()
{
    int n, min, num, pos = 0;
    cin >> n >> num;
    min = num;

    for (int i = 1; i < n; i++) {
        cin >> num;
        
        if (num < min) {
            min = num;
            pos = i;
        }
    }

    cout << "Menor valor: " << min << '\n';
    cout << "Posicao: " << pos << '\n';
    return 0;
}