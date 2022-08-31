#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string all_types[8][3] = {
        {"vertebrado", "ave", "carnivoro"}, 
        {"vertebrado", "ave", "onivoro"}, 
        {"vertebrado", "mamifero", "onivoro"}, 
        {"vertebrado", "mamifero", "herbivoro"}, 
        {"invertebrado", "inseto", "hematofago"}, 
        {"invertebrado", "inseto", "herbivoro"}, 
        {"invertebrado", "anelideo", "hematofago"}, 
        {"invertebrado", "anelideo", "onivoro"}
    };
    string corresponding_types[8] = {"aguia", "pomba", "homem", "vaca", "pulga", "lagarta", "sanguessuga", "minhoca"};
    string animal[3];
    cin >> animal[0] >> animal[1] >> animal[2];

    for (int i = 0; i < 8; i++) {
        if (equal(begin(all_types[i]), end(all_types[i]), begin(animal), end(animal))) {
            cout << corresponding_types[i] << '\n';
            break;
        }
    }

    return 0;
}