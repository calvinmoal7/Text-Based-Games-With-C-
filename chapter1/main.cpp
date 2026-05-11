// Lost Fortune RPG
// A personalized adventure

// libraries
#include <iostream> // display to, and read text from console
#include <string> // allows the creation of string objects

using namespace std;

int main() {
    // define a constant
    const int GOLD_PIECES = 900;

    // declare variables
    string leader; // last name of leader
    int adventurers; // number of adventurers that begin the journey
    int killed; // number of adventurers killed

    // Getting info from the player
    cout << "\tWelcome to Lost Fortune" << endl << endl;
    cout << "Please enter the following for a personalized adventure.";
    cout << endl << endl;
    
    cout << "Enter Your Last Name: ";
    cin >> leader;

    cout << "Enter a positive number: ";
    cin >> adventurers;

    cout << "Enter a positive numbe, less thn the first: ";
    cin >> killed;

    // Calculate two values needed to tell the story
    // calculate new values
    int survivors = adventurers - killed;
    int extraGoldPieces = GOLD_PIECES % survivors;

    // Telling the story
    cout << endl;
    cout << "The Brave " << leader << " lead a group of " << adventurers;
    cout << " adventurers on a quest." << endl;
    cout << " They fought a band of ogres and lost " << killed << " ...only ";
    cout << survivors << " survived." << endl;

    cout << " The party was about to give up when they stumbled upon a" << endl;
    cout << " buried fortune of " << GOLD_PIECES << " gold pieces. ";
    cout << " They split the loot and " << endl;
    cout << leader << " kept the extra " << extraGoldPieces << " gold piece(s)";
    cout << " to keep things fair." << endl;


    // Projects

    // 1. Write a program that displays the following game menu

    //      Game Menu
    //   1. One Player
    //   2. Two Players
    //   3. Quit
    
    // The program should get a choice from the player using Enter Choice: as a prompt
    // Then the program should display a message reporting the player's choice, as in: You Chose X
    // (where X isthe value the player entered)

    int menuChoice;

    cout << "\tAwesome Game" << endl;
    
    cout << "\tGame Menu" << endl;
    cout << "1. One player\n2. Two players\n3. Quit" << endl; 

    cout << "Enter your choice: ";
   

    for(int i = 0; ; i++) {
        cout << " ";
        cin >> menuChoice;
        if(menuChoice == 1) {
            cout << "Starting game... Playing as 1 player";
            break;
        }
        if(menuChoice == 2) {
            cout << "Starting game... Playing as 2 players";
            break;
        }
        if(menuChoice == 3) {
            cout << "Quiting the game...";
            break;
        }
        if(menuChoice != 1 && menuChoice != 2 && menuChoice != 3){
            cout << "wrong choice: re-enter\n";
        }
    }

    // 2. In a space shooter, a player earns a bonus at the end of each level.
    //    The player gets 100 points for every civilian saved and 50 points for every alien destroyed
    //    Write a program that gets the number of civilians saved and number of aliens destroyed. Then have your program
    //    display the bonus earned. Use two constants: one for the number of points a player earns for saving a civilian and another for the number of points a player earns for destroying an alien

    // define constants
    const int pointsForCivilianSaved = 70;
    const int pointsForAlienDestroyed = 100;
    
    int noOfCiviliansSaved;
    int noOfAliensDestroyed;

    cout << "\n\tSpace Shooter Game" << endl;
    cout << "How many Civilians were saved: ";
    cin >> noOfCiviliansSaved;
    cout << " How many Aliens were destroyed: ";
    cin >> noOfAliensDestroyed;

    cout << "Civilians Saved Bonus: " << pointsForCivilianSaved * noOfCiviliansSaved << endl;
    cout << "Aliens Destroyed Bonus: " << pointsForAlienDestroyed * noOfAliensDestroyed << endl;

    // 3. Write a program that gets three game scores from a player

    return 0;



}