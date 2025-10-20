#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/158/A
int round(int n, int k, int players[]){
    int counter = 0;

    for(int i = 0; i < n; i++) {
        if(players[i] >= players[k]){
            if(players[i] > 0){
                counter++;
            }
        }
    }

    return counter;
}

int main () {
    int arr[] = {10,9,8,7,7,7,5,5};
    cout << round(8, 5, arr);

    return 0;
}
