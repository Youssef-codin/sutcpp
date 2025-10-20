#include <iostream>

using namespace std;

// rated 800 https://codeforces.com/problemset/problem/791/A
//           Limak,        Bob
int bear(int weight1, int weight2){
    int counter;

    for(counter = 0; weight1 <= weight2; counter++){
        weight1 *= 3;
        weight2 *= 2;
    }

    return counter;
}

int main() {
    cout << "[2] Bear → " << bear(4, 7) << '\n';
}

