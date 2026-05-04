#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 0) {
        cout << "Error : Please input positive number" << endl;
    } else if (n < 1 || n > 9) {
        cout << "Error : Out of range" << endl;
    } else {
        string roman[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        cout << roman[n - 1] << endl;
    }

    return 0;
}