#include"Array.h"

int main() {

    Array emptyArray(5);
    emptyArray.display();

    Array randomArray(10, true);
    randomArray.display();

    Array rangeArray(10, 1, 100);
    rangeArray.display();

    std::cout << "Min: " << rangeArray.min() << std::endl;
    std::cout << "Max: " << rangeArray.max() << std::endl;

    rangeArray.sort();
    std::cout << "Sorted array: ";
    rangeArray.display();

    rangeArray.resize(5);
    std::cout << "Resized array: ";
    rangeArray.display();

    return 0;



}