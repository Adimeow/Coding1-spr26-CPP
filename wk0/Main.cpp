//Adi Van Wye Coding 1 Spring 2026 3.26.26
//Our first C++ Program

// to compile, open the Developer Command Prompt for VS 2022
// navigate to this foler with 'cd' for ' changed directory'
// use the command 'cL / EHsc filename.cpp' (in this case, it's 'main.cpp')
// and then type 'filename' to run the .exe (in this case, it's 'main')

#include <iostream>         // in-out stream, for sending text to the console.
#include <string>           // for the player name
using namespace std;        // so we don't have to type "std::" all the time

// this is where the program starts running code.
int main () {
    cout << "Hello world!" << endl;     // C out for "console out"   
    //variables at the top is best practice.
string playerName;              // variable names use camelCase

    // as the player what their name is
    cout <<"what is your name, player?";

    //get input from the player using c in
    cin >> playerName;

    cout << "Hello world!" << playerName << "." << endl; 
   
   cout << "Hello world!" << endl; // c out for "console out"
    //{ end L for "end Line"

    return 0;                        // the program finished successfully
}

int main() {
    // '\n' or 'backlash n' make sa new line
    cout << "\n\n\nAll about variables and logic!\n\n\n";

    //40 minutes!!!!

    //declaring a variable means it exists!
    //defining a variable means giving it a value.
    int playerAge = -1;             //intergers are whole numbers
    string playerName = "Sally";    // strings ar efor words / Letters
    float playerheight = 1.8f;      // height in meters
    bool playAgain = true;          // booleans are true or false

    // an if statement is a branch in unreal engine
    if(playerage == -1) {
            cout <<"How old are you?\n";
            cin >>playerAge;

            if(playerAge < 13) {
                cout <<I'm sorry, this game is too grown up for you.\n";
            }
            else{
                cout << "wow! that's old!\n}
    }//end of if(playerAge)

    // can you test to see if the polymer name is "sally" and if it is,
    //ask the player what their name is, and assign their response 
    //to PlayerName.

    if (playerName == "Sally") {
        cout << "Is your abme Sally>\n(yes/no) ";
        cin >> input;

        if(input == "yes") {
            cout << "Well, that's convinient!\n"
        }
    }    


    return 0;

} //end of main