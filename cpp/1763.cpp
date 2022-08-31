#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string country;
    map<string, string> countries;
    countries.insert({"brasil", "Feliz Natal!"});
    countries.insert({"alemanha", "Frohliche Weihnachten!"});
    countries.insert({"austria", "Frohe Weihnacht!"});
    countries.insert({"coreia", "Chuk Sung Tan!"});
    countries.insert({"espanha", "Feliz Navidad!"});
    countries.insert({"grecia", "Kala Christougena!"});
    countries.insert({"estados-unidos", "Merry Christmas!"});
    countries.insert({"inglaterra", "Merry Christmas!"});
    countries.insert({"australia", "Merry Christmas!"});
    countries.insert({"portugal", "Feliz Natal!"});
    countries.insert({"suecia", "God Jul!"});
    countries.insert({"turquia", "Mutlu Noeller"});
    countries.insert({"argentina", "Feliz Navidad!"});
    countries.insert({"chile", "Feliz Navidad!"});
    countries.insert({"mexico", "Feliz Navidad!"});
    countries.insert({"antardida", "Merry Christmas!"});
    countries.insert({"canada", "Merry Christmas!"});
    countries.insert({"irlanda", "Nollaig Shona Dhuit!"});
    countries.insert({"belgica", "Zalig Kerstfeest!"});
    countries.insert({"italia", "Buon Natale!"});
    countries.insert({"libia", "Buon Natale!"});
    countries.insert({"siria", "Milad Mubarak!"});
    countries.insert({"marrocos", "Milad Mubarak!"});
    countries.insert({"japao", "Merii Kurisumasu!"});

    while (getline(cin, country)) {
        if (countries.find(country) == countries.end()) {
            cout << "--- NOT FOUND ---\n";
        } else {
            cout << countries[country] << '\n';
        }
    }

    return 0;
}