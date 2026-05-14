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
    babyDragon(string givenName, int givenHealth, int givenDamage) {
        cout << "You found a baby Dragon, her name is << givenName" << "˙𐃷˙!\n";
        name = givenName;
        health = givenHealth;
        damage= givenDamage;
        hunger = 0;
        boredom=0;
        isAlive = true 
        status();            // 
    }


    // overload the constructor (notes from previous class)
    babyDragon() {
        name = "Ember";
        health = 10;
        damage = 3;
        hunger = 0;
        boredom = 0;
        isAlive = true;
        status();

    }

    // getters
    string getName() { return name;}
    int getHealth() { return health; }
    int getDamage() { return damage; }
    int getHunger() { return hunger; }
    bool getAlive() {return isAlive; }

    
    // setters
    void setName(string n) { name = n; }
    void setHealth(int h) {health = h; }
    void setDamage(int d) { damage =d; }
    void setHunger(int h) { hunger = h;}
    void setAlive(bool a) { isAlive = a; }





    // Check on your baby dragon
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

    //listen
    void listen() {
        cout << name << " makes a happy growl...\n";
        status;
    }

    //train your dragon
    void train() {
        if (hunger > 10) {
            cout << name << " is too hungry to train.\n";
        }
if (hunger > 5) {
    cout << name << " growls....baby dragon is getting hungry.\n";
        }

        cout << name << " trains hard.\n";

        if (rand() % 2 ==) {
            damage++;
            cout << "Damage increased!\n";
        } else {
            health++;
            cout << "Health increased!|n";

        }

        hunger++;
        
    }

    // prepare for trouble! *ੈ🐉 ༘⋆໋✧˚
    void battle(string enemyName, int enemyHealth, in enemyDamage) {
        if (hunger > 10) {
            cout << name << " is too hungry for battle.\n";
            return;
        }

        if (hunger > 5) {
            cout << name << " growls...is getting hungry.\n";
        
        }

        cout << "\n A wild " <<enemyName << appears!\n;

        string choice;

        while (enemyHaealth > 0 && health > 0) {
            cout << "Choose: attack / heal / run\n"
            getline(cin, choice);

            if(choice == "attacK") {
                cout << name << " attacks for " << damage << " damage.\n";
                enemyHealth -=damage;
            }
                else if (choice == "heal") {
                cout << name << " heals.\n";
                health += 2;

                
            }
                else if (choice == "run") {
                cout << name << " runs away!.\n";
                return;

            }   
            else { 
                cout << "Invalid choice.\n";
                continue;
            }         

            if (enemyHealth > 0) {
                cout << enemyName << " attack for " < enemyDamage << " damage.\n";
                health -= enemyDamage;
            }

        }

        if (health <=0 ) {
            cout << name << " has fallen.\n";
            isAlive = false;
        } else {
            cout << name << " defeated " << enemyName << "!\n";
        }

        hunger++;

    } 
    
        
    // new day
    
    void newDay() {
        hunger += 2;
        boredom += 2;
    }
    
};

// load names from file
vector<string> loadNames() {
    vector<string> names;
    ifstream file("name.txt");
    string line;

    while (getline(file, line)) {
        names.push_back(line);
    }

    return names;

}


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