#include <iostream>
#include <string>
int main(){
    int a ,b, c;
    cin >> a >> b >> c;

    int even = 0, odd = 0;
    if (a % 2 == 0) even++;
    if (b % 2 == 0) even++;
    if (c % 2 == 0) even++;

    cout << "even " << even << endl;
    cout << "odd " << odd << endl;
    return 0;
}