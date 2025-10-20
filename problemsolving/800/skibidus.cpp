#include <iostream>
#include <string>

using namespace std;

//rated 800 https://codeforces.com/problemset/problem/2065/B
int skibidus(string str){
    for(int i = 0; i < str.size() - 1; i++) {
        if(str[i] == str[i+1]){
            if(i-1 >= 0){
                str[i] = str[i-1];
            }
            str = str.erase(i+1, 1);
            i = -1;
        }
    }

    cout << str << '\n';
    return str.size();
}

int main() {
    cout << "[13] skibidus → " << skibidus("baa");
}

