// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 4

#include <iostream>
#include <vector>
using namespace std;

struct Color {
    int red;
    int blue;
    int green;
};

int main () {

    vector<Color> color;
    int n = rand() % (50 - 25 + 1) + 25;

    for (int i = 0; i < n; i++) {
        Color testC;

        testC.red = rand() % (255 - 0 + 1) + 0;
        testC.green = rand() % (255 - 0 + 1) + 0;
        testC.blue = rand() % (255 - 0 + 1) + 0;

        color.push_back(testC);
    }


    // cout << "red: " << colors[0].red << endl;
    // cout << "blue: " << colors[0].blue << endl;
    // cout << "green: " << colors[0].green << endl;
    

    return 0;
}
