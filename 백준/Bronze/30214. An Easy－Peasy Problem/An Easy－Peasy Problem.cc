#include <iostream>

int main() {
    int s1, s2;
    if (std::cin >> s1 >> s2) {
        if (s1 * 2 >= s2) {
            std::cout << "E" << std::endl;
        } else {
            std::cout << "H" << std::endl;
        }
    }
    return 0;
}