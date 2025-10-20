#include <iostream>
#include <string>

using namespace std;

// rated 800 https://codeforces.com/problemset/problem/978/B
int fileName(string name, int size){
    int counter = 0;
    for(int i = 0; i < size; i++){
        if(name[i] == 'x' && name[i+1] == 'x' && name[i+2] == 'x'){
            counter++;
        }
    }

    return counter;
}

int main() {
    cout << "[12] File Name → " << fileName("xxxxxxxxxx", 10);
}
