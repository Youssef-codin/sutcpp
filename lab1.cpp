//EXERCISE 1

#include <iostream>
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
        std::cout << i << '\n';
    }
}

//EXERCISE 4
int countOccurance(std::string array[], int size, std::string element){
    int counter = 0;

    for(int i = 0; i <= size; i++){
        if(array[i] == element){
            counter++;
        }
    }

    return counter;
}

std::string intersection(){

    return NULL;
}

int main () {
    loopPrint();
    std::string words[] = {"book", "spongebob", "music", "music"};
    int count = countOccurance(words, sizeof(words)/sizeof(words[0]), "music");
    std::cout << "Your count is: " << count;
    
    return 0;
}
