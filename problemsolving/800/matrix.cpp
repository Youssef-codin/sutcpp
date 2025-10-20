#include <cstdlib>
#include <iostream>

using namespace std;

// https://codeforces.com/problemset/problem/263/A
struct pos {
    int x;
    int y;

};

pos matrixHelper(int matrix[5][5]);

int matrix(int matrix[5][5]){
    pos currentPos = matrixHelper(matrix);
    int row = currentPos.x - 2;
    int col = currentPos.y - 2;

    return abs(row) + abs(col);
}

pos matrixHelper(int matrix[5][5]){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(matrix[i][j] == 1){
                return {i,j};

            }
        }
    }
    return {0,0};
}

int main () {
    int arr[5][5] = {
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    };

    cout << matrix(arr);

    return 0;
}
