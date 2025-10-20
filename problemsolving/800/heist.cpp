#include <iostream>

using namespace std;

// rated 800 https://codeforces.com/problemset/problem/1041/A
void bubbleSort(int array[], int size){
    int temp;

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                j = 0;
            }
        }
    }
}

int heist(int nOfItems, int nums[]){
    bubbleSort(nums, nOfItems);
    int max = nums[nOfItems];
    int min = nums[0];
    int stolenCounter = 0;

    for (int i = 0; i < nOfItems; i++) {  
        while (min < nums[i]) {
            stolenCounter++;
            min++;
        }
        min++;
    }

    return stolenCounter;
}

int main() {
    int nums[] = {7, 5, 6, 4, 8};
    cout << "[4] Heist → " << heist(5, nums) << '\n';
}
