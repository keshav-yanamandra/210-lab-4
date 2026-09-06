// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

struct Color {
    int red;
    int blue;
    int green;
};

int main () {
    // module 4 asked that I should not hardcode - so declaring conratnts
    const int MIN_RANGE = 25;
    const int MAX_RANGE = 50;
    const int MIN_COLOR = 0;
    const int MAX_COLOR = 255;

    vector<Color> colors;

    srand(time(0));
    int n = rand() % (MAX_RANGE - MIN_RANGE + 1) + MIN_RANGE;

    for (int i = 0; i < n; i++) {
        Color testC;

        testC.red = rand() % (MAX_COLOR - MIN_COLOR + 1) + MIN_COLOR;
        testC.green = rand() % (MAX_COLOR - MIN_COLOR + 1) + MIN_COLOR;
        testC.blue = rand() % (MAX_COLOR - MIN_COLOR + 1) + MIN_COLOR;

        colors.push_back(testC);
    }

    int j = colors.size();
    cout << endl;
    
    // including formatting
    cout << left << setw(10) << "Color#" << setw(10) << "R value" << setw(10) << "G value" << setw(10) << "B value" << endl;
    cout << left << setw(10) << "------" << setw(10) << "-------" << setw(10) << "-------" << setw(10) << "-------" << endl;

    
    for (int i = 0; i < j; i++) {
        cout << left
            << setw(10) << i + 1
            << setw(10) << colors[i].red
            << setw(10) << colors[i].green
            << setw(10) << colors[i].blue
            << endl;    
    }

    return 0;
}
