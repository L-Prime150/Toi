#include <iostream>
using namespace std;
int main(){
    string num;
    cin >> num;
    if (num.length() == 13){
        cout << "yes" << endl;
    }else{
        cout << "no" << endl;
    }
    return 0;
    }