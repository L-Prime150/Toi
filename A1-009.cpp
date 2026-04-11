#include <iostream>
using namespace std;

int main() {
    int scoreA, scoreB;

    if (!(cin >> scoreA >> scoreB)) return 0;

    int total = scoreA + scoreB;
    cout << total << endl;

    if (total >= 50) {
        cout << "pass" << endl;
    } else {
        cout << "fail" << endl;
    }

    return 0;
}