🐉✨ 𝒜𝒹𝒾 𝐹𝓁𝑜𝓇𝒶 𝒱𝒶𝓃 𝒲𝓎𝑒 ✨🐉


using namespace std;


int main() {
    string input;

    while(true) {
        cout << "What do you want to do?\n";

        getline(cin, input);

        // feed their critter
        if (input == "feed") {
            cout << "nom nom\n";
        } 
        // train their critter (chance to increase health or damage )
        else if(input == "train")  {
            cout << "pump to failure, brotherrrrrrr\n";
        }  
        // listen to their creature (chance to increase health or damage)
        else if(input == "listen") {
            cout << "I'm MAD!\n";
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