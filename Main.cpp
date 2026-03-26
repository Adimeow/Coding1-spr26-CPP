//Adi Van Wye Coding 1 Spring 2026 3.26.26
//Our first C++ Program

// to compile, open the Developer Command Prompt for VS 2022
// navigate to this foler with 'cd' for ' changed directory'
// use the command 'cL / EHsc filename.cpp' (in this case, it's 'main.cpp')
// and then type 'filename' to run the .exe (in this case, it's 'main')

#include <iostream>         // in-out stream, for sending text to the console.
#include <string>           // for the player name
using namespace std;        // so we on't have to type "std::" all the time

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
   
   cout << "Hellow world!" << endl; // c out for "console out"
    //{ end L for "end Line"

    return 0;                        // the program finished successfully
}