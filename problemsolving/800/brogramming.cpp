#include <iostream>
#include <string>

using namespace std;

//rating 800 https://codeforces.com/problemset/problem/2064/A
int brogramming(string s){
    string t = "";
    int moveCounter = 0;

    while(s.find('1') != string::npos || t.find('0') != string::npos){
        cout << "s str: " << s << '\n';
        cout << "t str: " << t << '\n';
        if(s.find('1') != string::npos){
            t.append(s.substr(s.find('1')));
            s = s.substr(0, s.find('1'));
            moveCounter++;

        } else if (t.find('0') != string::npos){
            s.append(t.substr(t.find('0')));
            t = t.substr(0, t.find('0'));
            moveCounter++;
        }

        if(moveCounter >= 10){
            break;
        }
    }

    return moveCounter;
}

int main() {
    cout << "[5] Brogramming → " << brogramming("101") << '\n';
}
