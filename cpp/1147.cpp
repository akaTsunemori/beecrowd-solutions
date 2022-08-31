#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <string>

using namespace std;

typedef pair<int, int> pii;

unordered_map<char, int> xcoords = {
    {'a', 0}, {'b', 1}, {'c', 2}, {'d', 3}, {'e', 4}, {'f', 5}, {'g', 6}, {'h', 7}
};
int d_x[] = {2, 1, -1, -2, -2, -1, 1, 2};
int d_y[] = {1, 2, 2, 1, -1, -2, -2, -1};
struct hash_func {
  size_t operator()(const pair<int ,int> &x) const {
    return x.first ^ x.second;
  }
};

int horse_moves(pii horse, unordered_set<pii, hash_func> pawns)
{
    int h_x, h_y, x, y, result = 0;
    h_x = horse.first;
    h_y = horse.second;
    for (int i = 0; i < 8; i++) {
        x = h_x + d_x[i];
        y = h_y + d_y[i];
        if (x >= 0 && y >= 0 && x < 8 && y < 8) {
            if (pawns.find(make_pair(x + 1, y + 1)) == pawns.end() &&
                pawns.find(make_pair(x - 1, y + 1)) == pawns.end()) {
                result++;
            }
        }
    }
    return result;
}

pii convert_position(string pos)
{
    pii res;
    res.first = xcoords[pos[1]];
    res.second = (int)pos[0] - '1';
    return res;
}

int main()
{
    pii h;
    unordered_set<pii, hash_func> pawns;
    int c = 1, i;
    string horse, pawn;
    cin >> horse;
    while (horse != "0") {
        h = convert_position(horse);
        for (i = 0; i < 8; i++) {
            cin >> pawn;
            pii a = convert_position(pawn);
            pawns.insert(convert_position(pawn));
        }
        cout << "Caso de Teste #" << c << ": " << horse_moves(h, pawns) << " movimento(s).\n";
        c++;
        pawns.clear();
        cin >> horse;
    }
    return 0;
}