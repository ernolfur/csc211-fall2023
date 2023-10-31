#include <iostream>

int sum_of_arr (int * array, int size);

int main () {
    int array[] = {1, 2, 3, 4, 5};

    std::cout << "The sum of the array {1, 2, 3, 4, 5} is " << sum_of_arr(array, 5) << std::endl;

    return 0;
}

int sum_of_arr (int * array, int size) {
    if (size == 1) {
        return array[0];
    }
    return array[0] + sum_of_arr(array + 1, size - 1);
}