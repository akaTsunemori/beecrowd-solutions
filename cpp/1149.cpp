#include <iostream>

using namespace std;

int main()
{
    int A, N = 0, sum = 0;
    cin >> A;
    while (N < 1) cin >> N;
    for (--N; N > -1; N--) sum += A + N;
    cout << sum << '\n';
    return 0;
}