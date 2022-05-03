#include <iostream>
#include <vector>

using namespace std;

vector<string> getStats(string item) {
    vector<char> splitItem;
    for (char letter: item) {
        splitItem.push_back(letter);
    }

    vector<string> stats;
    string stat;
    string character;

    for (char letter: splitItem) {
        if (letter == '|') {
            stats.push_back(stat);
            stat = "";
        }
        else {
            character = string (1, letter);
            stat += character;
        }
    }

    stats.push_back(stat);

    return stats;
}

int main() {
    
    // All weapons are formatted as such: Name | Type | Range | Attack Speed | Damage
    string weapons[] = {"Sword | Melee | All-Around | Semi-Fast | High", 
                        "Dagger | Hand-To-Hand | Small | Quick | Low",
                        "Bow and Arrow | Distanced | Huge | Semi-Fast | Medium",
                        "Hammer | Hand-To-Hand | Small | Semi-Slow | High",
                        "Battle Axe | Hand-To-Hand | Medium | Semi-Fast | High",
                        "Mace | Hand-To-Hand | Decent | Semi-Slow | High"};

    string weapon;
    cout << "Enter name of weapon: ";
    cin >> weapon;

    vector<string> stats;
    int i = 0;

    string name;
    string type;
    string range;
    string attackSpeed;
    string damage;

    while (true) {
        if (weapons[i].find_first_not_of(weapon)) {
            stats = getStats(weapons[i]);

            name = stats[0];
            type = stats[1];
            range = stats[2];
            attackSpeed = stats[3];
            damage = stats[4];

            break;
        }
        else {
            i += 1;
        }
    }

    cout << endl << "Name: " << name << endl;
    cout << "Type: " << type << endl;
    cout << "Range: " << range << endl;
    cout << "Attack Speed: " << attackSpeed << endl;
    cout << "Damage: " << damage << endl;
}
