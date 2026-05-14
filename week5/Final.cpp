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


// 🐉  Dragon Build  -- Defining Class ( (*ᴗ͈ˬᴗ͈)ꕤ*.ﾟcute dragon edition 🌸🐉)
class babyDragon {
private:
    string name;
    int health; 
    int damage;
    int hunger;
    int boredom;

    public:

    // constructor sets up baby dragon when it hatches!
    // a constructor function
    babyDragon(string givenName, into giveHealth, int giveDamage) {
        cout << "You found a baby Dragon, her name is << givenName << ˙𐃷˙!\n";
        name = givenName;
        health = giveHealth;
        damage= giveDamage;
        hunger = 0;
        boredom=0;
        status();            // 
    }
}

// overload the constructor (notes from previous class)
dragon() {
    name = "Emberblossom";
    health = 10
    damage = 3;
    hunger = 0;
    boredom = 0;
    status();

}

// Learn about your baby dragon
void status () {
    cout << "\n♡ " << giveName << ";s Stats ♡\n";
    cout << "Health : " << health << "\n";
    cout << "Damage : " << damage << "\n";
    cout << "Hunger : " << hunger << "\n";
    cout << "Boredom: " << boredom << "\n\n";

}

// feed your baby dragon
void feed() {
    cout << giveName << " eats gemstones! nom nom (๑ᵔ⤙ᵔ๑)♡\n"; 
    hunger = -2;
}

//train your dragon
void train() {
    cout << "Let's get stronger!\n";
    damage++;
    hunger++;
    boredom++;
}

// prepare for trouble!
void battle() {
   
    cout << "I'm " <<  << ", with " << health << " health ";
    cout << " and " << damage << " damage *ੈ🐉 ༘⋆໋✧˚.\n";
    
}

//main program
int main() {
    string input;

    //your dragon has opalescent scales and is named Ember Blossom
    babyDragon 

    cout << "Welcome to raising your Pet Dragon!\n"; 

    while(true) {
        cout << "What would you like to do?\n";

        getline(cin, input);

        // feed baby dragon
        if (input == "feed") {
            cout << "nom nom💎\n";
        } 
        // train your dragon (chance to increase health or damage )
        else if(input == "train")  {
            cout << "Let's get stronger!\n";
        }  
        // listen to their creature (chance to increase health or damage)
        else if(input == "listen") {
            cout << "RAWR˙ᵕ˙!\n";
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