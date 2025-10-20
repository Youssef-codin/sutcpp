#include <cctype>
#include <iostream>

using namespace std;

int getIndexOfLetter(char c);

int petya(string str1, string str2){
    int total1 = 0;
    int total2 = 0;

    for(auto c : str1){
        total1 += getIndexOfLetter(c) + 1;
    }

    for(auto c : str2){
        total2 += getIndexOfLetter(c) + 1;
    }

    if(total1 < total2) return -1;
    else if (total2 < total1) return 1;
    return 0;

}

int getIndexOfLetter(char c){
    char alphabet[] = {
        'a','b','c','d','e','f','g','h',
        'i','j','k','l','m','n','o','p',
        'q','r', 's','t','u','v','w','x',
        'y','z'};

    for(int i = 0; i < 26; i++){
        if(alphabet[i] == tolower(c)){
            return i;

        }
    }
    return -1;
}


int main () {
    string str1 = "abs";
    string str2 = "AbZ";
    cout << petya(str1, str2);

    return 0;
}

