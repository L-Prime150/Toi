#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;

if (n >= 100000) {
    cout << n / 1000 << "," ;
    int last3 = n % 1000;
    if (last3 < 100) cout << "0";
    if (last3 < 10) cout << "0";
    cout << last3 << endl;
} else {
    cout << n / 1000 << ",";
    int last3 = n % 1000;
    if (last3 < 100) cout << "0";
    if (last3 < 10) cout << "0";
    cout << last3 << endl;
}

return 0;
}