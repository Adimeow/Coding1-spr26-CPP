//*ੈ✩‧₊˚༺ 𝓐𝓭𝓲 𝓥𝓪𝓷 𝓦𝔂𝓮 ༻*ੈ✩‧₊˚
// Inheritance, Vectors of classes, and slime battling

#include  <iostream>
#include <string>
#include <vectors>
#include <ctime>            // for random numbers
#include <cstdlib>          // for random numbers

using namespace std;

class baseSlime {
    string name;
    int health;
    int damage;

    // default constructor
    baseSlime() {
        cout << "A new slime has been formed.\n";
        name = "slime";
        health = 5;
        damage = 3;
    }



    void hello () {
        cout << "I'm" << name << ", with " << health << " health ";
        cout << " and " << damage << " damage.\n";
    }
};





int main () {
    cout << "SLIME BATTLES\n";

    return 0;
}
