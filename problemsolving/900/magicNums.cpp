#include <iostream>
#include <string>

using namespace std;

//rated 900 https://codeforces.com/problemset/problem/320/A
string magicNums(string numStr){

    while(!numStr.empty()){
        string tempStr = numStr.substr(0,3);
        if(tempStr == "144"){
            numStr = numStr.substr(3);
        }else if (tempStr.substr(0,2) == "14"){
            numStr = numStr.substr(2);
        }else if(tempStr.substr(0,1) == "1"){
            numStr = numStr.substr(1);
        } else{
            return "NO";
        }
    }

    return "YES";
}

int main() {
    cout << "[8] Magic Numbers → " << magicNums("1441441414111") << '\n';
}

