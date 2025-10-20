#include <iostream>

using namespace std;

//https://codeforces.com/problemset/problem/231/A
int team(string solutions, int problems){

    int solutionCounter = 0;

    for(int i = 0; i < problems; i++){
        string substr = solutions.substr(0, solutions.find('\n'));
        // cout << "Substring num : " << i << "\t" <<substr << "\n";

        int counter = 0;

        for(auto ltr : substr) {
            if(ltr == '1'){
                counter++;
            }
        }

        if(counter >= 2){
            solutionCounter++;
        }

        counter = 0;
        solutions = solutions.substr(solutions.find('\n') + 1);
    }

    return solutionCounter;
}

int main() {
    
    cout << team("1 1 0 \n 1 1 1 \n 1 0 0", 3);
    return 0;
}
