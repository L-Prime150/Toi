#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int result = a;
    if (b > result) result = b;
    if (c > result) result = c;

    cout << result << endl;

    return 0;
}