#include <iostream>
#include <queue>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string keyboard = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    unordered_map<char, char> keys;
    for (int i = 1; i < keyboard.length(); i++) {
        keys[keyboard[i]] = keyboard[i - 1];
    }
    keys['\n'] = '\n';
    keys[' '] = ' ';
    queue<char> text;
    string line;
    while (getline(cin, line)) {
        for (char i: line) {
            text.push(keys[i]);
        }
        text.push('\n');
    }
    while (!text.empty()) {
        cout << text.front();
        text.pop();
    }
    return 0;
}