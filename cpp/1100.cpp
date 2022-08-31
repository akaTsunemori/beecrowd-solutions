#include <iostream>
#include <string>
#include <queue>

using namespace std;

int dx[] = {2, 2, -2, -2, 1, 1, -1, -1};
int dy[] = {1, -1, 1, -1, 2, -2, 2, -2};

class Knight
{
    public:
        int x, y, dist;
        Knight(int a, int b, int c = 0)
        {
            x = a;
            y = b;
            dist = c;
        }
};

bool check_bounds(int x, int y)
{
    return (x > 0 && x < 9 && y > 0 && y < 9);
}

int solution(int pos_x, int pos_y, int targ_x, int targ_y)
{
    queue<Knight> queue;
    queue.push(Knight(pos_x, pos_y));
    bool visited[9][9] = {false};
    visited[pos_x][pos_y] = true;
    int i, x, y;
    while (!queue.empty()) {
        Knight move = queue.front();
        queue.pop();
        if (move.x == targ_x && move.y == targ_y) {
            return move.dist;
        }
        for (i = 0; i < 8; i++) {
            x = move.x + dx[i];
            y = move.y + dy[i];
            if (check_bounds(x, y) && !visited[x][y]) {
                visited[x][y] = true;
                queue.push(Knight(x, y, move.dist + 1));
            }
        }
    }
    return 0;
}

int main()
{
    string fr, to;
    int fr_x, fr_y, to_x, to_y, moves;
    while (cin >> fr >> to) {
        fr_x = fr[0] - 96;
        to_x = to[0] - 96;
        fr_y = fr[1] - '0';
        to_y = to[1] - '0';
        moves = solution(fr_x, fr_y, to_x, to_y);
        cout << "To get from " << fr << " to " << to << " takes " << moves << " knight moves.\n";
    }
    return 0;
}