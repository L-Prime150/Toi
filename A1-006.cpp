#include <iostream>
using namespace std;
int main(){
int a, b;

    if(!(cin >> a >> b)) return 0;

if (b == 0){
    cout << "invalid" << endl;
}

    else if (a % b == 0){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    return 0;
}