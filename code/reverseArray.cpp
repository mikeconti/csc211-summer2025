// Write a function that receives an array of integers 
// and reverses the contents of the array
#include <iostream>

void printArray(int a[], int length){
    for(int i = 0 ; i < length; i++){
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

void reverseArray(int a[], int length){  //[1, 2, 3, 4]

    int head = a[0];
    int tail;

    int temp;

    for(int i = 0 ; i < length/2; i++){
        temp = a[i];
        tail = a[length - 1 - i];
        a[length - 1 - i] = temp;
        a[i] = tail;
    }
    
}

int main(){

    int someArray[] = {1, 2, 3, 4, 5};

    printArray(someArray, 5);

    reverseArray(someArray, 5);

    printArray(someArray, 5);



}
