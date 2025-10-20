#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/71/A
string longWords(string word){
    int length = word.length();

    if(word.length() >= 10){
        return word[0] + to_string(length - 2) + word[length - 1]; 
    }

    return word;
}

int main () {
    cout << longWords("localization");
    
    return 0;
}
