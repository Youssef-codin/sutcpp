#include <iostream>
#include <string>

using namespace std;

// rated 900 https://codeforces.com/problemset/problem/1475/A
string oddDivisor(long num){
    long x = num;

    if(x % 2 == 0){
        x--;
    }

    for(x ;x > 1; x-=2){
        if(num % x == 0){
            return "YES";
        }
    }

    return "NO";
}

//fails, takes too long
int main() {
    cout << "[6] Odd Divisor → " << oddDivisor(1099511627776) << '\n';
}

