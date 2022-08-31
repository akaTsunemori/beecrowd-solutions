#include <iostream>
#include <cstring>

using namespace std;

int* load_primes(int n)
{
    int p, i, j;
    bool is_it_prime[n + 1];
    memset(is_it_prime, true, n + 1);

    for (p = 2; p * p <= n; p++) {
        if (is_it_prime[p] == true) {
            for (i = p * p; i <= n; i+= p) {
                is_it_prime[i] = false;
            }
        }
    }

    int* primes = new int[n];

    for (i = 2, j = 0; i <= n; i++) {
        if (is_it_prime[i] == true) {
            primes[j] = i;
            j++;
        }
    }

    return primes;
}

int josephus(int n, int k, int primes[])
{
    if (n == 1) {
        return 1;
    } else {
        return ((josephus(n - 1, k + 1, primes) + primes[k] - 1) % n + 1);
    }
}

int main()
{
    int n;
    int* primes = load_primes(32625);

    while (true) {
        cin >> n;

        if (n == 0) {
            break;
        }

        cout << (josephus(n, 0, primes)) << endl;
    }

    delete[] primes;
    return 0;
}