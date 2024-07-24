#include <iostream>
using namespace std;

int main() {
    int choice;
    float area, radius, side, base, height;

    cout << "Choose a shape (1: Circle, 2: Square, 3: Triangle): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            break;
        case 2:
            cout << "Enter side length: ";
            cin >> side;
            area = side * side;
            break;
        case 3:
            cout << "Enter base and height: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            break;
        default:
            cout << "Invalid choice" << endl;
            return 1;
    }

    cout << "The area is: " << area << endl;
    return 0;
}