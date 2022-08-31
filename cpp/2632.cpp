#include <stdio.h>
#include <cmath>
#include <string>

using namespace std;

bool collisionDetection(int cx, int cy, int radius, int rx, int ry, int w, int h) {
    int closest_X = cx, closest_Y = cy, dist_X, dist_Y;
    float dist;

    if (cx < rx) {
        closest_X = rx;
    } else if (rx + w < cx) {
        closest_X = rx + w;
    }

    if (cy < ry) {
        closest_Y = ry;
    } else if (ry + h < cy) {
        closest_Y = ry + h;
    }

    dist_X = cx - closest_X;
    dist_Y = cy - closest_Y;
    dist = sqrt(pow(dist_X, 2) + pow(dist_Y, 2));

    if (dist <= radius) {
        return true;
    }

    return false;
}

int main() {
    int n, i;
    scanf("%d", &n);

    string spells[4] = {"fire", "water", "earth", "air"};
    int properties[4][4] = {
        {200, 20, 30, 50},
        {300, 10, 25, 40},
        {400, 25, 55, 70},
        {100, 18, 38, 60}
    };

    for (i = 0; i < n; i++) {
        int w, h, x0, y0;
        scanf("%d %d %d %d", &w, &h, &x0, &y0);
        char a[5];
        int level, cx, cy;
        scanf("%s %d %d %d", &a, &level, &cx, &cy);

        string spell = string(a);
        int j;

        for (j = 0; j < 4; j++) {
            if (spells[j] == spell) {
                break;
            }
        }

        bool collision = collisionDetection(cx, cy, properties[j][level], x0, y0, w, h);

        if (collision == true) {
            printf("%d\n", properties[j][0]);
        } else {
            printf("%d\n", 0);
        }
    }

    return 0;
}