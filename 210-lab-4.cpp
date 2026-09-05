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

    vector<Color> colors;

    Color testC = {150, 100, 50};

    colors.push_back(testC);

    cout << "red: " << colors[0].red << endl;
    cout << "blue: " << colors[0].blue << endl;
    cout << "green: " << colors[0].green << endl;
    

    return 0;
}
