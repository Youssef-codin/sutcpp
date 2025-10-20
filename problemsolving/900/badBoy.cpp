#include <iostream>
#include <string>

using namespace std;

struct pos {
    int row;
    int col;
};

//rated 900 https://codeforces.com/problemset/problem/1537/B
string badBoy(pos sizeOfMatrix, pos antonPos){
    string rtrnStr = "";

    if(sizeOfMatrix.row == 1 && sizeOfMatrix.col == 1){
        return "1 1 1 1";
    }

    pos firtPos {sizeOfMatrix.row, 1};
    pos secondPos {1, sizeOfMatrix.col};

    if(antonPos.row == firtPos.row && antonPos.col == firtPos.col){
        if(sizeOfMatrix.row >1){
            firtPos.row -= 1;
        }else {
            firtPos.row +=1;
        }
    }

    if(antonPos.row == secondPos.row && antonPos.col == secondPos.col){
        if(sizeOfMatrix.col > 1){
            secondPos.col -= 1;
        }else {
            secondPos.col += 1;
        }
    }

    rtrnStr += to_string(firtPos.row) + " "
        + to_string(firtPos.col) + " "
        + to_string(secondPos.row) + " "
        + to_string(secondPos.col);

    return rtrnStr;
}

int main() {
    cout << "[10] Bad Boy → " << badBoy(pos{1000000000,1000000000}, pos{1000000000,50});
}
