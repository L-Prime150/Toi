#include <iostream>
using namespace std;

int main() {
    int scoreA, scoreB, scoreC;

    cin >> scoreA;
    cin >> scoreB;
    cin >> scoreC;

    if (scoreA >= 5 && scoreB >= 20 && scoreC >= 25) {
        cout << "pass" << endl;
    } else {
        cout << "fail" << endl;
    }

    return 0;
}