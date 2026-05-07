· ˚ ༘ ⋆｡˚ 𝒜𝒹𝒾 𝐹𝓁𝑜𝓇𝒶 𝒱𝒶𝓃 𝒲𝓎𝑒 ˚｡⋆ ༘ ˚ ·
Coding 1 Final 🐉✨ -- Raising Dragons -- ✨🐉

#include  <iostream>
#include <string>
#include <vectors>
#include <ctime>            // for random numbers
#include <cstdlib>          // for random numbers

using namespace std;

class baseDragon {
    string name
    int health; 
    int damage;

    baseDragon() {
        cout << "You found a baby Dragon!\n";
        name << ""
    }
}

int main() {
    string input;

    while(true) {
        cout << "What do you want to do?\n";

        getline(cin, input);

        // feed their critter
        if (input == "feed") {
            cout << "nom nom\n";
        } 
        // train their critter (chance to increase health or damage )
        else if(input == "train")  {
            cout << "Let's get stronger!\n";
        }  
        // listen to their creature (chance to increase health or damage)
        else if(input == "listen") {
            cout << "I'm MAD!\n";
        }
        // battle other creatures, with options to
            // attack
            // heal
            // run away
        else if(input == "battle") {
            cout << "an enemy approaches!\n";
        }
        else {
            cout << "I did not understand that command.\n";
        }
    }
}