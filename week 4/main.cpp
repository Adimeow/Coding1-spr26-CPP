// Adi Van Wye
// Writing to and reading from files

#include<iostream>
#include<fstream>        // file steam, include stream and ostream
#include<string>         // include stream
#include<vector>

using namespace std;




void writeFile(string input, string path = "save.txt"){
    ofstream file(path);
    file << input;
    file.close();
}



void writeFile(vector<string>& vec, string path = "vector.txt"){
    ofstream file(path);
    for(int i = 0; i < vec.size(); i++) {
        file << vec[i] << endl;
    }
    file.close();
}

void readFile(string path = "save.txt") { 
    string line; 
    ifstream file(path);
    if(file.is_open()) {
        while(getline(file, line)) {
            cout << line << endl;
        }
    }
    else {
            cout << "File not found.\n";
    }
    file.close();
}

void readFile(vector<string>& vec, string path = "vector.txt") {
    vec.clear();
    ifstream file(path);
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            vec.push_back(line);
        }
        file.close();
    }
    else {
        cout << "File not found.\n";
    }
}

int main() {
    cout << "Let's do some file operations!\n";




    fstream file;
    file.open("save.txt"); 

    file << "Here is some text.";

    file.close();




    // call writeFile here and send it both lines
    writeFile("Here is some text.");

    // string line;
    // ifstream readFile("save.txt");
    // if(readFile.is_open()) {
    //     while (getline(readFile, line)) {
    //         cout << line << endl;
    //     }    
    // }   
    readFile(); 

    vector<string> names = {"Harry", "Hermoine"}; 
    // "load" the names from the file (with readFile())
    readFile(names, "names.txt");
    // displaying the names in the vector



    writeFile(names, "names.txt");




    return 0;
}