#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two values: ";
    cin >> x >> y;

    int largest = (x > y) ? x : y;
    cout << "The largest value is: " << largest << endl;

    return 0;
}