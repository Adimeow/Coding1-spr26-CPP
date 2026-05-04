// Adi Van Wye


#include <iostream>
#include <string>
using namespace std;


// classes are custom cariable types that have their own
// variables and functions

// constructors
// getters and setters (privacy)
//


class robot {
private:
    string name;
    int charge;
    int boredom;

    public:
    // constructor accepts variables and sets up the robot when it is created.
    // a constructor function needs no retrn type, and must be names as class
    robot(strong giveName, int givenCharge, int givenBoredom) {
        name = givenName;
        charge = givenCharge;
        boredom = givenBoredom;
        status();
    }

    // overload the constructor
    robot() {
        name = "bot";
        charge = 10;
        boredom = 0;
        status ();
    }

    void status () {
        cout << "My name is " << name << " , my name is " << charge << ".\n";
        cout << " I am ";

        if(boredom < 5) {
            cout << "happy";
        }
        else if(boredom < 10){
            cout << "bored";
        }
        else if (boredom)
    }
};



void newDay() {
    boredom +=2;
}

void play() {
    boredom -+ 1;
}

void setName(string givenName) {
    if(giveName.size() < 5) {
        name = givenName;
    }
    else {
        cout << "error: name is too long.\n";
    }
}

int main() {
    cout << "let's build some classes!\n";



    robot artoo(:R2-D2", 45, 10);

   
     //   artoo.name = "R2-D2";
     //   artoo.name = 45;
     //   artoo.boredom 10;

    robot threepio;
    threepio.name = "C-3PO";
    threepio.charge = 2;

cout << "Here's artoo: " << artoo.name << ".\n";
   
cout << artoo.name << " notices that " << threepio.name;
cout << " doesn't have much battery left. Let's fix that.\n";

while(threepio.charge < 15) {
    artoo.charge -= 1;
    threepio.charge += 1;
}

cout << "threepio's in charge now " << threepio.charge << ".\n";
cout << "artoo's charge is now " << artoo.charge << ".\n"; 

return 0;

artoo.status();
threepio.status();





string input = "";
int turns = 0;

while(true) {
    while(turns < 3) {
        cout << "what would you like to do?\n";
        getline(cin, input);

        if(input == "play") {
            cout << "let's play with " << artoo.name << "! \n";
            artoo.play()
        };
        else if(input == "status"){
            artoo.status();
        }
        turns++;
    }
    turns = 0;
    cout << "Do you want to keep playing?\n";
    getline(cin, input);

    if(input == "no") {
        break;
    }
    artoo.newDay();
}



return 0;
}