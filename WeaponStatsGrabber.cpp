#include <iostream>

using namespace std;

string* getValues(string item) {
    int i = 0;
    string letter;
    
    while (true) {
        letter = item[i];
        if (letter == "|") {
            i += 1;
            break;
        }
        else if (letter == " ") {
            i += 2;
            break;
        }
        else {
            i += 1;
        }
    }

    letter = item[i];
    if (letter == " ") {
        i += 1;
    }

    string category;
    while (true) {
        letter = item[i];
        if (letter == "|") {
            i += 1;
            break;
        }
        else if (letter == " ") {
            i += 2;
            break;
        }
        else {
            category += letter;
            i += 1;
        }
    }

    letter = item[i];
    if (letter == " ") {
        i += 1;
    }

    string power;
    while (true) {
        letter = item[i];
        if (i == item.length()) {
            break;
        }
        else {
            power += letter;
            i += 1;
        }
    }

    static string stats[2] = {category, power};
    return stats;
}

int main() {
    string weapons[3] = {"Broadsword | Melee | 5", "Shortbow | Ranged | 3", "Longbow | Ranged | 4"};

    string name;
    cout << "Enter the weapon name:" << endl;
    cin >> name;

    int i = 0;
    string* values;
    string category;
    string power;
    
    while (true) {
        if(weapons[i].find_first_not_of(name)) {
            cout << endl;
            
            values = getValues(weapons[i]);
            category = values[0];
            power = values[1];
            
            break;
        }
        else {
            i += 1;
        }
    }

    cout << "Name: " << name << endl;
    cout << "Category: " << category << endl;
    cout << "Power: " << power << endl;
    return 0;
}
