#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    string result = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        result += tolower(s[i]);
    }

    cout << result << endl;

    return 0;
}