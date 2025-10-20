#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

//rating 900 https://codeforces.com/problemset/problem/1837/B
int compareStr(int size, string comparators){

    unordered_set<int> s = {5};

    int tempNum = 5;

    for(int i = 0; i<size; i++){
        char sign = comparators[i];

        if(sign == '>'){
            s.insert(++tempNum);
        }else{
            s.insert(--tempNum);
        }
    }

    // for(auto var: s){
    //     cout << "element: " << var << "\n";
    // }

    return s.size();
}

int main() {
    cout << "[9] Compare Strings → " << compareStr(4, ">>><<") << '\n';
}
