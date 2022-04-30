#include <iostream>
#include <algorithm>

using namespace std;

void generateTitle() {
    for (int i = 0; i < 10; i++) {
        cout << endl;
    }

    cout << "  _____  _____   _____ " << endl;
    cout << " |  __ \\|  __ \\ / ____|" << endl;
    cout << " | |__) | |__) | |  __ " << endl;
    cout << " |  _  /|  ___/| | |_ |" << endl;
    cout << " | | \\ \\| |    | |__| |" << endl;
    cout << " |_|  \\_\\_|     \\_____|";

    for (int i = 0; i < 5; i++) {
        cout << endl;
    }
}

int main() {
    generateTitle();
}
