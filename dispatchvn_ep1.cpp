#include <iostream>
using namespace std;

bool isMerciful = false;
int Blazer_Impression_Score = 0;

void scene_interrogation();
void scene_street_fight();
void scene_bar_flambae();
void scene_billboard();
void scene_combat_toxic();

int main() {
    
    scene_interrogation();
    scene_street_fight();
    scene_bar_flambae();
    scene_billboard();

    return 0;
}

void scene_interrogation() {
    int choice;

    cout << "=== The Moral Crossroads: Apartment Interrogation ===" << endl;
    cout << "\nTo try and get Soothing Goon to talk, Robert drags him over to his apartment balcony and threatens to throw him over if he doesn't reveal Shroud's location." << endl;
    cout << "\nSoothing Goon: Fuckfuckfuck---wait! Wait! Wait! Wait!" << endl;
    cout << "Robert: Hey! Hey! I have neighbors." << endl;
    cout << "   Use your inside voice and just tell me where Shroud is?" << endl;
    cout << "Soothing Goon: Okay, okay, uh, uh-- Steel-- Steel Mill." << endl;
    cout << "   Llewelyn uh, Llewelyn Steel Works okay? Fuck." << endl;
    cout << "Robert: You're sure about that?" << endl;
    cout << "Soothing Goon: Yes! Please, that's all I know!" << endl;
    cout << "Robert: Stop screaming, goddamnit!" << endl;
    cout << "Soothing Goon: HELP! HEEEEL-mmmphh" << endl;
    cout << "Robert: Hey, hey, I will pull you up if you quiet the fuck down." << endl;
    cout << "\nShould Robert..." << endl;
    cout << "1. Pull Him Back (Demonstrates restraint and compassion; establishes Robert as merciful)" << endl;
    cout << "2. Let Him Drop (Shows ruthless efficiency; creates fear-based respect)" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
        isMerciful = true;
        cout << "Robert pulls Soothing Goon into safety, establishing him as merciful." << endl;  
        cout << endl; 
    }
    else if (choice == 2) {
        isMerciful = false;
        cout << "Robert dropped Soothing Goon from his apartment, showing ruthless efficiency." << endl;
        cout << endl;
    }
    else {
        cout << "Invalid Input.";
    }
}

void scene_street_fight() {
    int choice;

    cout << "=== Tactical Consequence: Street Fight ===" << endl;
    cout << "Robert steps outside and notices a group of robbers loading stolen goods into a truck while the news plays on the TVs in a nearby store window. He decides to intervene, confronting one of the thugs in a tense street fight." << endl;
    cout << "\nMecha Man (Robert): I'm enough to deal with a pack of fuckin' skittles idiots like you." << endl;
    cout << "Orange Ski: Goddamn it... Look, you're hurt, you're not thinkin' straight." << endl;
    cout << "   You don't wanna fight someone who knows which hand every punch is coming from." << endl;
    cout << "\nShould Mecha Man..." << endl;
    cout << "1. Punch with Right Hand" << endl;
    cout << "2. Punch with Left Hand" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Robert swings with his right hand, but the thug anticipates the move."; //unfinished
    }

    else if (choice == 2) {
        cout << "Success"; //unfinished
    }

}

void scene_bar_flambae() {
    int choice;

    cout << "=== Relationship Impact: The Superhero Bar Scene ===" << endl;
    cout << "Narratibve" << endl; //unfinished
    cout << "\nFlambae: I am Flambae, and you--" << endl;
    cout << "Mecha Man: Wait, oh shit I do remember you." << endl;
    cout << "   You're that shitty villain I busted up." << endl;
    cout << "Flambae: Not anymore, Mecha Dick." << endl;
    cout << "   As I literally said, I am Flambae, a real superhero." << endl;
    cout << "   And you are not Mecha Man Anymore." << endl;
    cout << "   So you need to get the fuck out of here." << endl;
    cout << "   Now, we can do this the easy way." << endl;
    cout << "\nShould Mecha Man..." << endl;
    cout << "1. Throw Water" << endl;
    cout << "2. Throw Alcohol" << endl;

    if (choice == 1) {

    }
    else if (choice == 2) {

    }

}
