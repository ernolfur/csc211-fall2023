#include <iostream>

int GCD(int a, int b) {

    std::cout << "a = " << a << std::endl; 
    std::cout << "b = " << b << std::endl;
    std::cout <<  std::endl; 

    if (b == 0) {
        return a;
    }

    std::cout << "a % b = " << a % b << std::endl; 
    std::cout <<  std::endl; 

        return GCD(b, a % b);
 }


 int main(){

    std::cout << GCD(32, 40);

    return 0;
 }