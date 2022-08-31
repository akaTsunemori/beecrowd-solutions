#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, g_power = 0, g_kills = 0, g_deaths = 0, power, kills, deaths;
    string g_name = "", name;
    bool flag = false;
    cin >> n;

    for (n; n > 0; n--) {
        cin >> name >> power >> kills >> deaths;

        if ((power > g_power)
        ||  (kills > g_kills && power == g_power)
        ||  (deaths < g_deaths && kills == g_kills && power == g_power)
        ||  (name < g_name && deaths == g_deaths && kills == g_kills && power == g_power))
        {
            flag = true;
        }

        if (flag) {
            g_name = name;
            g_power = power;
            g_kills = kills;
            g_deaths = deaths;
            flag = false;
        }
    }

    cout << g_name << '\n';
    return 0;
}