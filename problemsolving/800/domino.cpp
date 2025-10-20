#include <iostream>

using namespace std;

//https://codeforces.com/problemset/problem/50/A
int domino(int m, int n){
    int size = m*n;
    return size / 2;
}

int main () {
    
    cout << domino(3, 3);
    return 0;
}
