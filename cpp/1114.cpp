#include <iostream>

using namespace std;

int main()
{
    int passwd;
    
    while (true) {
        cin >> passwd;

        if (passwd == 2002) {
            cout << "Acesso Permitido\n";
            break;
        }

        cout << "Senha Invalida\n";
    }

    return 0;
}