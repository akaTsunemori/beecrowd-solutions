#include <iostream>

using namespace std;

int main()
{
    int i, j = 7;
    
    for (i = 1; i < 10; i += 2) {
        cout << "I=" << i << ' ' << "J=" << j << '\n';
        cout << "I=" << i << ' ' << "J=" << j - 1 << '\n';
        cout << "I=" << i << ' ' << "J=" << j - 2 << '\n';
    }
    
    return 0;
}