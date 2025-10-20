#include <iostream>
int main () {
    int x = 6;
    int* y = &x;

    std::cout << "X address: " << &x << '\n';
    std::cout << "Y pointer: " << y << '\n';
    std::cout << "Y address: " << &y << '\n';

    return 0;
}
