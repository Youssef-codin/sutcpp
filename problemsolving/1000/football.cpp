#include <iostream>
#include <string>

using namespace std;

// rated 1000 https://codeforces.com/problemset/problem/43/A
string football(string desc, int lines) {
    string team1str;
    string team2str;

    int team1Goals = 0;
    int team2Goals = 0;

    if (lines <= 1) {
        return desc;
    }

    for (int i = 1; i <= lines; i++) {
        string substr = desc.substr(0, desc.find("\n"));
        
        if(team1str.empty()){
            team1str = substr;
        }
        else if(substr != team1str && team2str.empty()) {
            team2str = substr;
        }

        desc = desc.substr(desc.find("\n") + 1);

        if (substr == team1str){
            cout << team1str << " SCORED \n";
            team1Goals++;
        } else {
            cout << team2str << " SCORED \n";
            team2Goals++;
        }
    }

    if (team1Goals > team2Goals){
        return team1str; 
    }
    else {
        return team2str; 
    }
}

int main() {
    string desc = "A\nABA\nABA\nA\nA";
    cout << "[3] Football → WINNER: " << football(desc, 5) << '\n';
}

