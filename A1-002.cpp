#include <iostream>
using namespace std;

int main() {
    int money;
    cin >> money;

    int b10 = money / 10;
    money %= 10;

    int b5 = money / 5;
    money %= 5;

    int b2 = money / 2;
    money %= 2;

    int b1 = money;

    cout << "10 = " << b10 << endl;
    cout << "5 = " << b5 << endl;
    cout << "2 = " << b2 << endl;
    cout << "1 = " << b1 << endl;

    return 0;
}