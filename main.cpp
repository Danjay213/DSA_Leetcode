#include <iostream>
using namespace std;

int main() {
    char var, equal;
    int x = 121;

    cin >> var >> equal >> x;   

    if (x < 0) {
        cout << "false";
        return 0;
    }

    int original = x;
    int reversed = 0;

    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    if (original == reversed)
        cout << "true";
    else
        cout << "false";

    return 0;
}