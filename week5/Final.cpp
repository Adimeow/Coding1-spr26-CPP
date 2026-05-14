// · ˚ ༘ ⋆｡˚ 𝒜𝒹𝒾 𝐹𝓁𝑜𝓇𝒶 𝒱𝒶𝓃 𝒲𝓎𝑒 ˚｡⋆ ༘ ˚ ·
// ✧˚ · Coding 1 Final — Raising Dragons 🐉✨
// May 14


// 🌸 Toolbox of Functions (includes)🌸

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

// 🐉  Dragon Build  -- Defining Class ( (*ᴗ͈ˬᴗ͈)ꕤ*.ﾟcute dragon edition 🌸🐉)
// Dragon class
class dragon {
private:
    string name;
    int health;
    int damage;
    int hunger;
    bool isAlive;

    public:


    // constructor
    dragon(string givenName, int givenHealth, int givenDamage) {
    name = givenName;
    health = givenHealth;
    damage = givenDamage;
    hunger = 0;
    isAlive = true;
    status();
}

    // overloaded constructor
    dragon() {
    name = "myDragon";
    health = 10;
    damage = 3;
    hunger = 0;
    isAlive = true;
    status();
}

    // getters
    string getName() { return name; }
    int getHealth() { return health; }
    int getDamage() { return damage; }
    int getHunger() { return hunger; }
    bool getAlive() { return isAlive; }

    // setters
    void setName(string n) { name = n; }
    void setHealth(int h) { health = h; }
    void setDamage(int d) { damage = d; }
    void setHunger(int h) { hunger = h; }
    void setAlive(bool a) { isAlive = a; }

    // status
    void status() {
    cout << "\\n" << name << "'s Stats:\\n";
    cout << "Health: " << health << "\\n";
    cout << "Damage: " << damage << "\\n";
    cout << "Hunger: " << hunger << "\\n\\n";
    }   

    // feed
    void feed() {
        cout << name << " eats happily.\\n";
        hunger -= 3;
        if (hunger < 0) hunger = 0;
    }

    // listen
    void listen() {
    cout << name << " makes a happy noise.\\n";
    status();
    }

    // train
    void train() {
    if (hunger > 10) {
        cout << name << " is too hungry to train.\\n";
        return;
    }

    if (hunger > 5) {
        cout << name << " growls… getting hungry.\\n";
    }

    cout << name << " trains hard.\\n";

    if (rand() % 2 == 0) {
        damage++;
        cout << "Damage increased!\\n";
    } else {
        health++;
        cout << "Health increased!\\n";
    }

    hunger++;
}

// battle
void battle(string enemyName, int enemyHealth, int enemyDamage) {
    if (hunger > 10) {
        cout << name << " is too hungry to battle.\\n";
        return;
    }

    if (hunger > 5) {
        cout << name << " growls… getting hungry.\\n";
    }

    cout << "\\nA wild " << enemyName << " appears!\\n";

    string choice;

    while (enemyHealth > 0 && health > 0) {
        cout << "Choose: attack / heal / run\\n";
        getline(cin, choice);

        if (choice == "attack") {
            cout << name << " attacks for " << damage << " damage.\\n";
            enemyHealth -= damage;
        }
        else if (choice == "heal") {
            cout << name << " heals.\\n";
            health += 2;
        }
        else if (choice == "run") {
            cout << name << " runs away.\\n";
            return;
        }
        else {
            cout << "Invalid choice.\\n";
            continue;
        }

        if (enemyHealth > 0) {
            cout << enemyName << " attacks for " << enemyDamage << " damage.\\n";
            health -= enemyDamage;
        }
    }

    if (health <= 0) {
        cout << name << " has fallen.\\n";
        isAlive = false;
    } else {
        cout << name << " defeated " << enemyName << "!\\n";
    }

    hunger++;
    }

        // new day
        void newDay() {
     hunger += 2;
};


};

    // load names from file
    vector<string> loadNames() {
    vector<string> names;
    ifstream file("names.txt");
    string line;

    while (getline(file, line)) {
    names.push_back(line);
    }

return names;


}

// main program
int main() {
 srand(time(0));


    cout << "Name your dragon: ";
    string playerName;
    getline(cin, playerName);

    dragon myDragon(playerName, 10, 3);

    vector<string> enemyNames = loadNames();

    string input = "";
    int turns = 0;

    while (true) {

    while (turns < 3) {
        cout << "What would you like to do?\\n";
        cout << "feed / train / listen / battle / status\\n";

        getline(cin, input);

        if (input == "feed") {
            myDragon.feed();
        }
        else if (input == "train") {
            myDragon.train();
        }
        else if (input == "listen") {
            myDragon.listen();
        }
        else if (input == "battle") {
            string enemy = enemyNames[rand() % enemyNames.size()];
            myDragon.battle(enemy, 8, 2);
        }
        else if (input == "status") {
            myDragon.status();
        }
        else {
            cout << "Invalid command.\\n";
        }

        turns++;
    }

        turns = 0;

        cout << "Do you want to keep playing?\\n";
        getline(cin, input);

        if (input == "no") {
        break;
        }

        myDragon.newDay();
    
    }

    return 0;


}