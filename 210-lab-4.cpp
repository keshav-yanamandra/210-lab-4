// Keshav Yanamandra
// COMSC-210-5293, Fall 2026
// Lab 4

#include <iostream>
using namespace std;

struct Color {
    int red;
    int blue;
    int green;
};

int main () {

    Color testC = {150, 100, 50};

    cout << "red: " << testC.red << endl;
    cout << "blue: " << testC.blue << endl;
    cout << "green: " << testC.green << endl;
    

    return 0;
}
