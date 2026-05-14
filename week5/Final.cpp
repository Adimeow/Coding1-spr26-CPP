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
    babyDragon(string givenName, int giveHealth, int giveDamage) {
        cout << "You found a baby Dragon, her name is << givenName" << "˙𐃷˙!\n";
        name = givenName;
        health = giveHealth;
        damage= giveDamage;
        hunger = 0;
        boredom=0;
        status();            // 
    }


    // overload the constructor (notes from previous class)
    babyDragon() {
        name = "Emberblossom";
        health = 10;
        damage = 3;
        hunger = 0;
        boredom = 0;
        status();

    }

    // Learn about your baby dragon
    void status () {
        cout << "\n♡ " << name << ";s Stats ♡\n";
        cout << "Health : " << health << "\n";
        cout << "Damage : " << damage << "\n";
        cout << "Hunger : " << hunger << "\n";
        cout << "Boredom: " << boredom << "\n\n";

    }

    // feed your baby dragon
    void feed() {
        cout << name << " eats gemstones! nom nom (๑ᵔ⤙ᵔ๑)♡\n"; 
        hunger -= 2;
        if(hunger < 0) hunger = 0;
    }

    //train your dragon
    void train() {
        cout << name << " trains hard and gets stronger!\n";
        damage += 1 ;
        hunger += 1;
        boredom += 1;
    }

    // prepare for trouble!
    void battle() {
    
        cout << "an enermy has appeared!\n";
        cout << name << " attacks for " << " damage!*ੈ🐉 ༘⋆໋✧˚.\n";
        hunger += 1;
        boredom += 1;
    } 
    
    void newDay() {
        hunger += 2;
        boredom += 2;
    }
    
};

//main program -- creating dragon adventure
int main() {
    
    // during an adventure you come a cross  an egg with a diamond like shell
    // as you hold the egg it starts to move and crack
    // a baby dragon breaks through and immediately imprints seeing you
    //your dragon has opalescent scales and is named Ember Blossom
    babyDragon ember("Ember Blossom", 10, 3);

    cout << "Welcome to Raising Dragons!\n"; 

    string input = "";
    int turns = 0;
    while (true) {

    
        while (turns < 3) {
            cout << "What would you like to do?\n";
            cout << "feed / train / listen / battle / status\n";

            getline(cin, input);

            // feed baby dragon
            if(input == "feed") {
                ember.feed();
                cout << "nom nom💎\n";
            } 
            // train your dragon (chance to increase health or damage )
            else if(input == "train")  {
                ember.train();
                cout << "Let's get stronger!\n";
            }  
            // listen to their creature 
            else if(input == "listen") {
                ember.listen();
                cout << "RAWR˙ᵕ˙!\n";
            }
            // battle other creatures, with options to
                // attack
                
            else if(input == "battle") {
                ember.battle();
                cout << "an enemy approaches!\n";
            }
            else if(input == "status") {
                //check status
                ember.status();
            }
            else {
                cout << "I did not understand that command.\n";
            }
            turns++;
        

            turns = 0;

            cout << "Do you want to keep playing?\n";
            getline(cin, input);

            if(input == "no") {
                break;
            }

            ember.newDay();
        }

    return 0;
    }

}