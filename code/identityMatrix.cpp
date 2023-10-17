#include <iostream>

// Write a program that reads in the value of n, and prints the identity matrix of size n x n?

// n = 3

// 1 0 0
// 0 1 0
// 0 0 1


int main(){

    int n;
    std::cin >> n;

    int M[n][n];

    //checkpoint a

    for(int i = 0 ; i < n; i++){
        for (int j = 0 ; j < n; j++){
            if(i == j){
                M[i][j]= 1;
            }
            else{
                M[i][j] = 0;
            }

            std::cout << M[i][j] << " ";

        }
        std::cout <<std::endl;
    }



    return 0;
}