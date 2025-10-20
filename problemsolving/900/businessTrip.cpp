#include <iostream>

using namespace std;

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

//rated 900 https://codeforces.com/problemset/problem/149/A
int businessTrip(int minCm, int months[12]){
    int cm = 0;
    int monthsCounter = 0;

    bubbleSort(months, 12);

    int whileHelper = 11;

    while(cm < minCm){
        cm += months[whileHelper];
        whileHelper--;
        monthsCounter++;
    }

    return monthsCounter;
}

int main() {
    int arr[12] = {1, 1, 4, 1, 1, 5, 1, 1, 4, 1, 1, 1};
    cout << "[7] Business Trip → " << businessTrip(11, arr) << '\n';
}
