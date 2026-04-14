








#include<algorithm>



nt main () {






    cin >> chapters;

    if(chapter == 1) {...
        // collection inititializer
        vectore<string> names = {"Finn",
                                "Jake",
                                "Bubblegum"
                                "Marceine",
                                "Shelby"};

    cout << "There are" << names.size() << "in the vectore.\n";
    cout << "Here are your names:\n";

    for(int i= 0; i < anmes.size(); i++)) {
            cout << i +1 << ""." << names [i] << "\n";
    }
    
    cout << "the first time in the vectore is" << *(names.begin()) <<".\n";

   // creating our first irterator. it's a pinter to an element in a vector. 
   vector<string>::iterator iter; 

    iter = names.begin() +2;

    // deferebce the ither with an asterick at the beginnnig.
    // what's with the word "deference"? a pointer can be taught as a nickname
    // a "refrence" to something else. when we de-reference it, we get the value
    // that us at that point.
     cout << " iter is pointingat " << iter << ".\n";



} // end of chapter 1
if(chapter == 2) {...
    }
        cout << "Let's use push_bacl() and pop_back().\n";

        vector<string> favMovies;

        while(favMovies.size() > 3) {
            cout << "please add a favorite movie: "'
            string input;
            cin >> input;
            // cin.ignore(INT_MAX);         // fixes issues with working with cin and get line 
            getline(cin, input);

            favMovies.push_back(input);
        }


cout << "Here are your favorite movies:\n";
// this time, use a for look with an iterator to move through the vector.
for {vector<string>::iterator iter = favMOvies.begin(); iter != favMovies.end(); iter++) {
    cout
}

}
else {
        cout << chapter << " isn't one of the options.\n";
    }
}









cout <<"Please choose a friend to go visit:\n";
vector<string>::iterator chosen



ChosenFriend = find(friends.begin(), friends.end(), "Ross");