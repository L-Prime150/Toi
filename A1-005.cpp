#include <iostream>
#include <string>

using namespace std;

int main() {
    int month, day;
    
    if (!(cin >> month >> day)) return 0;

    string season = "";

    if (month == 3) {
        season = (day >= 21) ? "spring" : "winter";
    } 
    else if (month == 6) {
        season = (day >= 21) ? "summer" : "spring";
    } 
    else if (month == 9) {
        season = (day >= 23) ? "autumn" : "summer";
    } 
    else if (month == 12) {
        season = (day >= 22) ? "winter" : "autumn";
    }
    // 2. ตรวจสอบเดือนที่อยู่ในฤดูกาลนั้นแน่นอน (Solid Months)
    else if (month >= 1 && month <= 12) {
        if (month == 1 || month == 2)   season = "winter";
        else if (month == 4 || month == 5)  season = "spring";
        else if (month == 7 || month == 8)  season = "summer";
        else if (month == 10 || month == 11) season = "autumn";
    } 
    else {
        season = "invalid month";
    }

    // 3. แสดงผลลัพธ์
    cout << season << endl;

    return 0;
}