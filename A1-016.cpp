#include <iostream>
#include <string>

int main() {
    std::string id;
    string id;
    getline(cin, id);
    
    if (id.length() == 8 && id[2] == '1' && id[3] == '6') {
    } else {
        std::cout << "no" << std::endl;
    }
    
    return 0;
}