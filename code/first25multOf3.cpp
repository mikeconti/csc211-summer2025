#include <iostream>

// Write a single for loop to print the average of the first 25 multiples of three.

int main(){

    int mult = 3;
    int sum = 0;
    
    for(int i = 0 ;i < 25; i++ ){

        std::cout << mult << std::endl;

        sum += mult;

        mult +=3;

    }

    std::cout << "Sum =" << (float) sum/ 25;


    
    return 0;
}