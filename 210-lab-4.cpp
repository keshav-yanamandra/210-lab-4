// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 4

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

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
    
    for (int i = 0; i < j; i++) {

        cout << "red: " << colors[i].red << endl;
        cout << "blue: " << colors[i].blue << endl;
        cout << "green: " << colors[i].green << endl;
    }

    return 0;
}
