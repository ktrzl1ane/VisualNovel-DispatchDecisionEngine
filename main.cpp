#include <iostream>
using namespace std;

//Global variables to track character states and relationships
bool isMerciful = false;
int Blazer_Impression_Score = 0;
bool isRomanticTensionActive = false;

//Function prototypes
void scene_interrogation();
void scene_street_fight();
void scene_bar_flambae();
void scene_billboard();
void scene_combat_toxic();
void epilogue_summary();

int main() {

    cout << "Welcome to Robert's Pivot: Dispatch Episode 1 Visual Novel" << endl;
    cout << "Your choices will shape Robert's journey from superhero to dispatcher." << endl;
    
    scene_interrogation();
    scene_street_fight();
    scene_bar_flambae();
    scene_billboard();
    scene_combat_toxic();
    epilogue_summary();

    return 0;
}

void scene_interrogation() {
    int choice;

    cout << "\n=== The Moral Crossroads: Apartment Interrogation ===" << endl;
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
    cout << "1. Pull Him Back" << endl;
    cout << "2. Let Him Drop" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    if (choice == 1) {
        isMerciful = true;
        cout << "Robert pulls Soothing Goon into safety, establishing him as merciful." << endl;  
    }
    else if (choice == 2) {
        isMerciful = false;
        cout << "Robert dropped Soothing Goon from his apartment, showing ruthless efficiency." << endl;
    }
    else {
        cout << "Invalid Input. Defaulting to ruthless efficiency." << endl;
        isMerciful = false; //Default to false for invalid input
    }
}

void scene_street_fight() {
    int choice;

    cout << "\n=== Tactical Consequence: Street Fight ===" << endl;
    cout << "Robert steps outside and notices a group of robbers loading stolen goods into a truck while the news plays on the TVs in a nearby store window. He decides to intervene, confronting one of the thugs in a tense street fight." << endl;
    cout << "\nMecha Man (Robert): I'm enough to deal with a pack of fuckin' skittles idiots like you." << endl;
    cout << "Orange Ski: Goddamn it... Look, you're hurt, you're not thinkin' straight." << endl;
    cout << "   You don't wanna fight someone who knows which hand every punch is coming from." << endl;
    cout << "\nShould Mecha Man (Robert)..." << endl;
    cout << "1. Punch with Right Hand" << endl;
    cout << "2. Punch with Left Hand" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Mecha Man swings with his right hand, but the thug anticipates the move. He counters and strikes Robert with the crowbar. Game Over for this fight—you take a hit!" << endl;
    }

    else if (choice == 2) {
        cout << "Mecha Man punches with his left hand and knocks out the attacker. Tactical efficiency wins the day!" << endl; 
    }

    else {
        cout << "Invalid Input. Defaulting to failure." << endl;
        cout << "You get countered and struck with the crowbar. Game Over!" << endl;
    }
}

void scene_bar_flambae() {
    int choice;

    cout << "\n=== Relationship Impact: The Superhero Bar Scene ===" << endl;
    cout << "Mecha Man (Robert) enters the superhero bar, where heroes unwind. Suddenly, Flambae bursts in, engulfed in flames, causing chaos" << endl;
    cout << "\nFlambae: I am Flambae, and you--" << endl;
    cout << "Mecha Man (Robert): Wait, oh shit I do remember you." << endl;
    cout << "   You're that shitty villain I busted up." << endl;
    cout << "Flambae: Not anymore, Mecha Dick." << endl;
    cout << "   As I literally said, I am Flambae, a real superhero." << endl;
    cout << "   And you are not Mecha Man Anymore." << endl;
    cout << "   So you need to get the fuck out of here." << endl;
    cout << "   Now, we can do this the easy way." << endl;
    cout << "\nShould Mecha Man (Robert)..." << endl;
    cout << "1. Throw Water" << endl;
    cout << "2. Throw Alcohol" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Robert throws water, extinguishing Flambae's flames immediately." << endl;
        cout << "Flambae slips on the wet floor and loses teeth on the counter, creating a more subdued but painful outcome." << endl;
        Blazer_Impression_Score += 2; //Mild impression
    }

    else if (choice == 2) {
        cout << "Robert throws alcohol, amplifying Flambae's fire powers dramatically." << endl;
        cout << "Flambae's hair catches ablaze, causing panic and chaos that Blonde Blazer remembers vividly." << endl;
        Blazer_Impression_Score += 5; //Stronger impression
    }

    else {
        cout << "Invalid input. Defaulting to water." << endl;
        cout << "Flames extinguished immediately, but Flambae slips and loses teeth painfully." << endl;
        Blazer_Impression_Score += 2; 
    }
}

void scene_billboard() {
    int choice;

    cout << "\n=== Romance Route: Billboard Scene ===" << endl;
    cout << "Robert and Blonde Blazer are atop a billboard, the city below. A charged moment arises as they reflect on their lives." << endl;
    cout << "Robert: The family tradition, if there is one, is dying in that suit." << endl;
    cout << "   Which I guess I don't have to worry about anymore." << endl;
    cout << "   What is it?" << endl;
    cout << "Blonde Blazer: I'm not quite drunk enough to share my origin story just yet..." << endl;
    cout << "   but, remind me to tell you someday." << endl;
    cout << "Robert: Definitely.";
    cout << "Blonde Blazer: We can work with this." << endl;
    cout << "Should Robert..." << endl;
    cout << "1. Kiss Her" << endl;
    cout << "2. Let the Moment Pass" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        isRomanticTensionActive = true;
        cout << "Robert leans in and kisses her, opening future romance possibilities and showing vulnerability." << endl;
    }

    else if (choice == 2) {
        isRomanticTensionActive = false;
        cout << "Robert lets the moment pass, maintaining tension without pressure. Emotional intelligence shines." << endl;
    }

    else {
        cout << "Invalid Input. Defaulting to letting it pass." << endl;
        isRomanticTensionActive = false;
    }
}

void scene_combat_toxic() {
    int choice;

    cout << "\n=== Character Reflection: Combat Decision ===" << endl;
    cout << "Robert faces Toxic, who mocks his father with painful truths about his past." << endl;
    cout << "Soothing Goon/Toxic: It turns out right after Shroud shot him in the chest, your dad pissed his pants." << endl;
    cout << "   Betcha didn't know that, huh?" << endl;
    cout << "   So, after that bullet tore through his insides, he still had enough time to know how absolutely fucked he was, and just pissed himself like a little bitch. It was like, so much piss." << endl;
    cout << "   Cause your dad was wearing shorts so it just--" << endl;
    cout << "Mecha Man (Robert): Hey. I get it." << endl;
    cout << "Should Mecha Man (Robert)..." << endl;
    cout << "1. Punt" << endl;
    cout << "2. Stomp" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Robert punts Toxic in a flashy, creative move, adding comic relief." << endl;
        if (isMerciful == true) {
            cout << "   Your merciful nature makes this feel like a playful takedown." << endl;
        }
    }

    else if (choice == 2) {
        cout << "Robert stomps Toxic with brutal efficiency and intimidation." << endl;
        if (isMerciful == false) {
            cout << "   Your ruthless streak amplifies the no-nonsense approach." << endl;
        }
    }

    else {
        cout << "Invalid Input. Defaulting to stomp." << endl;
        if (isMerciful == false) {
            cout << "   Your ruthless streak amplifies the no-nonsense approach." << endl;
        }
    }
}

void epilogue_summary() {
    cout << "\n=== Epilogue: Robert's Pivot ===" << endl;
    cout << "Based on your choices, here's how Robert's journey unfolds:" << endl;

    if (isMerciful == true) {
        cout << "\nRobert embraces a path of compassionate leadership, becoming a dispatcher who values mercy and restraint." << endl;
    } 
    else {
        cout << "\nRobert adopts pragmatic efficiency, ruling through fear and ruthless decisions as a dispatcher." << endl;
    }

    cout << "\nBlonde Blazer's impression of Robert is shaped by his public behavior. Impression Score: " << Blazer_Impression_Score << endl;
    if (Blazer_Impression_Score >= 3) {
        cout << "She vividly remembers the chaotic bar scene and sees him as bold and memorable." << endl;
    } 
    else {
        cout << "She recalls a more subdued interaction, viewing him as reliable but unremarkable." << endl;
    }
    
    if (isRomanticTensionActive) {
        cout << "\nThe romantic kiss on the billboard sparks a deep connection, influencing future relationships." << endl;
    } 
    else {
        cout << "\nThe moment passed, leaving romantic tension that adds intrigue to his dispatcher role." << endl;
    }
    
    cout << "\nRobert's pivot to dispatcher is complete, shaped by your decisions." << endl;
}
