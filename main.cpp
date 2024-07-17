#include <iostream>

#include "Sorting/BubbleSort.cpp"

int main(void)
{
    int array[10] = {1, 3, 2, 6, 4, 9, 10, 5, 7, 8};

    for (int i = 0; i < 10; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;

    BubbleSort(array, 10);

    for (int i = 0; i < 10; ++i) {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}