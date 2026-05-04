#include <iostream>
#include <string>
using namespace std;
int main(){
    int y1, m1, d1, y2, m2, d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;
    if ((y1 < y2) || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 < d2)) {
        cout << "1" << endl;
    } else {
      if ((y2 < y1) || (y2 == y1 && m2 < m1) || (y2 == y1 && m2 == m1 && d2 < d1)) {
            cout << "2" << endl;
        }
        else {
           if ((y2 == y1) || (y2 == y1 && m2 == m1) || (y2 == y1 && m2 == m1 && d2 == d1)) {
               cout << "0" << endl;
           }
        }
    }
    return 0;
}