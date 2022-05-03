#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<string> getStats(string item) {
    vector<char> splitItem;
    for (char letter: item) {
        splitItem.push_back(letter);
    }

    remove(splitItem.begin(), splitItem.end(), ' ');

    for (int i = 0; i <= 2; i++) {
        splitItem.pop_back();
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
    string weapons[] = {"Broadsword | Melee | 5", "Longbow | Ranged | 4", "Dagger | Hand-To-Hand | 2"};

    vector<string> stats;
    stats = getStats(weapons[1]);

    for (string stat: stats) {
        cout << stat << endl;
    }
}
