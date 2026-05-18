#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string input;
    cin >> input;

    string rankStr = "";
    char suitChar;

    suitChar = toupper(input[input.size() - 1]);
    rankStr = input.substr(0, input.size() - 1);

    string rank = "";
    char r = toupper(rankStr[0]);

    if (rankStr == "A" || rankStr == "a")
        rank = "ace";
    else if (r == 'J')
        rank = "jack";
    else if (r == 'Q')
        rank = "queen";
    else if (r == 'K')
        rank = "king";
    else
        rank = rankStr; // 2-10 ใช้ตัวเลขตรง ๆ

    string suit = "";
    if (suitChar == 'D')
        suit = "diamonds";
    else if (suitChar == 'H')
        suit = "hearts";
    else if (suitChar == 'S')
        suit = "spades";
    else if (suitChar == 'C')
        suit = "clubs";

    cout << rank << " of " << suit << endl;

    return 0;
}