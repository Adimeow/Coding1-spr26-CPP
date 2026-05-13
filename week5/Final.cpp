// · ˚ ༘ ⋆｡˚ 𝒜𝒹𝒾 𝐹𝓁𝑜𝓇𝒶 𝒱𝒶𝓃 𝒲𝓎𝑒 ˚｡⋆ ༘ ˚ ·
// ✧˚ · Coding 1 Final — Raising Dragons 🐉✨
// May 14


// 🌸 Toolbox of Functions (includes)🌸
#include  <iostream>
#include <string>
#include <vector>
#include <fstream>          // for reading files?
#include <ctime>            // for random numbers
#include <cstdlib>          // for random numbers
using namespace std;


// 🐉  Dragon Build  -- Defining Class ( cute dragon edition 🌸🐉)
class babyDragon {
private:
    string name
    int health; 
    int damage;
    int hunger;

    public:
    babyDragon(string Ember Blossom) {
        cout << "You found a baby Dragon, her name is Ember Blossom!\n";
        name = "Ember Blossom"
        health = 10;
        damage= 3;
        hunger = 0;
        listen();            // 
    }
}

int main() {
    string input;

    while(true) {
        cout << "What do you want to do?\n";

        getline(cin, input);

        // feed baby dragon
        if (input == "feed") {
            cout << "nom nom\n";
        } 
        // train your dragon (chance to increase health or damage )
        else if(input == "train")  {
            cout << "Let's get stronger!\n";
        }  
        // listen to their creature (chance to increase health or damage)
        else if(input == "listen") {
            cout << "RAWR!\n";
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