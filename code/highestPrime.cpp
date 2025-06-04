#include <iostream>
// Write a function  highest_prime that takes an integer n > 1 
// from std::cin and outputs the largest prime number less than or equal than n to the stdout
// use an is_prime function to help find highest_prime

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }
    return true;
}

int highestPrime(int n){
    for(int i = n; i > 0 ; i--){
        if(isPrime(i)){
            return i;
        }
    }
    return 0;
}

int main(){

    std::cout << highestPrime(2031);


    return 0;
}