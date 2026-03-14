#include <iostream>
#include <string>
int main() {
    std::string s;
    std::cin >> s;
    size_t dotPos = s.find('.');
    std::cout << s.substr(0, dotPos) << std::endl;    
    return 0;
}