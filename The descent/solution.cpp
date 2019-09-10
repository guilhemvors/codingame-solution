#include <iostream>

using namespace std;

int main()
{
    // game loop
    while (1) {
        unsigned short mountainMaxHeight = 0;
        unsigned short indexOfMountainMaxHeight = 0;
        for (unsigned short i = 0; i < 8; i++) {
            unsigned short mountainH; // represents the height of one mountain.
            cin >> mountainH; cin.ignore();
            if (mountainH > mountainMaxHeight)
            {
                mountainMaxHeight = mountainH;
                indexOfMountainMaxHeight = i; // keep track of highest mountain
            }
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        cout << indexOfMountainMaxHeight << endl; // The index of the mountain to fire on.
    }
}
