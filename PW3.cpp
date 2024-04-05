#include <iostream>
using namespace std;

int main() {
    int number;
    int* ptr;

    cout << "Enter a number: ";
    cin >> number;

    ptr = &number;

    *ptr = *ptr + 13;

    cout << "Updated number: " << number << endl;

    return 0;
}