#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{   
    int n;
    cin >> n;

    for (n; n > 0; n--) {
        map<string, float> items;
        int m, p, amount;
        string item;
        float price, sum = 0;
        cin >> m;

        for (m; m > 0; m--) {
            cin >> item >> price;
            items[item] = price;
        }

        cin >> p;

        for (p; p > 0; p--) {
            cin >> item >> amount;
            sum += (items.find(item)->second) * amount;
        }

        printf("R$ %.2f\n", sum);
    }

    return 0;
}