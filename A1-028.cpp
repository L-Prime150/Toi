#include <iostream>
#include <string>
using namespace std;

int main(){
    string num;
    cin >> num;
    
    int n = stoi(num); // Convert string to int
    
    int d1 = n / 1000;
    int d2 = n / 100 % 10;
    int d3 = n / 10 % 10;
    int d4 = n % 10;
    
    printf("%d%d%d%d", d1, d2, d3, d4);
    return 0;
}