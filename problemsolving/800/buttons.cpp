#include <iostream>
#include <string>

using namespace std;

//rated 800 https://codeforces.com/problemset/problem/1858/A
string buttons(int a, int b, int c){
    a += c/2;

    if(c % 2 != 0){
        a++;
    }

    b += c/2;
    
    if(a > b){
        return "First";
    }

    return "Second";
}

int main() {
    cout << "[11] Buttons → " << buttons(2, 2, 8);
}
