#include <iostream>

using namespace std;

//https://codeforces.com/problemset/problem/282/A
int bit(string str){
    int x = 0;

    for(int i = 0; i < str.length(); i++){
        cout << str[i] << '\n';
        if(str[i] == '+' && str[i + 1] ==  '+'){
            x++;

        }else if(str[i] == '-' && str[i - 1] ==  '-'){
            x--;

        }
    }
    
    return x;
}

int main () {
    cout << bit("++X\n--X");
    
    return 0;
}
