#include <iostream>

// Write a function  highest_prime that takes an integer n > 1 
// from stdin and outputs the largest prime number less than or equal than n to the stdout

bool isPrime(int someNum){
    for(int i = 2; i < someNum/2; i++){
        if(someNum % i == 0){
            return false;
        }
    }
    return true;
}

int highestPrime(int n){
    int highPrime = 0;

    for(int i = n; i > 0; i--){
        if(isPrime(i)){
            highPrime = i;
            return highPrime;
        }
    }

    return highPrime;

}

int main(){

    std::cout << highestPrime(7);

    return 0;
}