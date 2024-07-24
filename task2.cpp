#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
    int total = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'I') total += 1;
        if (s[i] == 'V') total += 5;
        if (s[i] == 'X') total += 10;
        if (s[i] == 'L') total += 50;
        if (s[i] == 'C') total += 100;
        if (s[i] == 'D') total += 500;
        if (s[i] == 'M') total += 1000;
    }
    return total;
}

int main() {
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;
    cout << "Integer value: " << romanToInt(roman) << endl;
    return 0;
}