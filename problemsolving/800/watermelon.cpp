#include <iostream>
#include <string>

using namespace std;

string watermelon(int w) {
    if (w % 2 == 0) {
        return "YES";
    }
    return "NO";
}

int main () {
    cout << "[1] Watermelon → " << watermelon(3) << '\n';
}
