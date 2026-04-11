#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;

    if (!(cin >> input)) return 0;

    int count = 1;
    for (int i = 0; i < input.length(); i++){
        if (i + 1 < input.length() && input[i] == input[i + 1]){
            count++;
        }
        else{
            cout << count << input[i];
            count = 1;
        }
    }
    cout << endl;
    return 0;
}