#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    string digits[10] = {"**** ** ** ****", "  *  *  *  *  *", "***  *****  ***", 
    "***  ****  ****", "* ** ****  *  *", "****  ***  ****", "****  **** ****", 
    "***  *  *  *  *", "**** ***** ****", "**** ****  ****"};
    string total[64];
    int i, j, n = 0;

    for (i = 0; i < 5; i++) {
        string number;
        getline(cin, number);
        
        for (j = 0; j < number.length(); j += 4) {
            total[n] = number[j];
            total[n] += number[j + 1];
            total[n] += number[j + 2];
            n += 1;
        }
    }

    int step = floor(n / 5);
    bool beer = true, contains = false;
    string result = "";

    for (i = 0; i < step; i++) {
        string number = "";
        contains = false;

        for (j = i; j < n; j += step) {
            number += total[j];
        }

        for (j = 0; j < 10; j++) {
            if (number == digits[j]) {
                contains = true;
                break;
            }
        }

        if (contains == true) {
            result += to_string(j);
        } else {
            beer = false;
            break;
        }
    }

    if (beer == true) {
        if (stoi(result) % 6 == 0) {
            cout << "BEER!!" << endl;
        } else {
            cout << "BOOM!!" << endl;    
        }
    } else {
        cout << "BOOM!!" << endl;
    }

    return 0;
}