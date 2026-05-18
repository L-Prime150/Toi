#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int maxVal;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        maxVal = (a > b) ? a : b;
        sum += maxVal;
    }

    cout << sum << endl;

    return 0;
}