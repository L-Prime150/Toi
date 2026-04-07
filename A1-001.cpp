#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, surname;
    if (!(cin >> name >> surname)) return 0; 
    cout << "Hello " << name << " " << surname << endl;
    cout << name.substr(0, 2) << surname.substr(0, 2) << endl;
    return 0;
}