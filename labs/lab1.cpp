#include <iostream>

using namespace std;

//IN LAB EXERCISES 0
char gradeToLetter(int grade){
    if(grade <= 60) return 'F';
    else if (grade <= 70) return 'D';
    else if (grade <= 80) return 'C';
    else if (grade < 90) return 'B';
    else return 'A';
}

int realAmountToRecharge(int num){
    return num * ((double)30/100);
}

int rechargeAmountToReal(int num){
    return num + (num * (double)70/100);
}

//EXERCISE 1
int areaRect(int length, int width){
    return length * width;
}

//EXERCISE 2
bool isEven(int num){
    if(num % 2 == 0){
        return true;
    }

    return false;
}

//EXERCISE 3
void loopPrint(){
    for(int i = 1; i <= 10; i++){
        cout << i << '\n';
    }
}

//EXERCISE 4
int countOccurance(string array[], int size, string element){
    int counter = 0;

    for(int i = 0; i <= size; i++){
        if(array[i] == element){
            counter++;
        }
    }

    return counter;
}

//EXERCISE 5
string intersection(){

    return NULL;
}

int main() {
    int input;
    cout << "1. Recharge amount to real amount\n2. Real amount to recharge amount\nEnter: ";
    cin >> input;

    if(input == 1){
        int num;
        cout << "Enter the amount: ";
        cin >> num;

        cout << "The converted amount is: " << rechargeAmountToReal(num);
    } else if (input == 2){
        int num;
        cout << "Enter the amount: ";
        cin >> num;

        cout << "The converted amount is: " << realAmountToRecharge(num);
    } else {
        cout << "Enter a valid input";
    }
}
