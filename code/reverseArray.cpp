// Write a function that receives an array of integers and reverses the contents of the array
#include <iostream>

void printArray(int someArray[], int n){

    for(int i = 0 ; i < n; i++){
        std::cout << someArray[i] << " ";
    }
}

void reverseArray(int someArray[], int n){
    int temp;
    for(int i = 0; i < n/2; i++){
        temp = someArray[i];
        someArray[i] = someArray[(n - 1) - i];
        someArray[(n - 1) - i] = temp;


    }


}

int main(){

    int arr[5] = {1,2,3,4,5};

    printArray(arr, 5);
    reverseArray(arr, 5);
    std::cout << std::endl;
    printArray(arr, 5);
}