#include <iostream>
#include "types_of_pointers.h"

using std::cout, std::endl, std::string;

int main() {
//    declaring a pointer variable and de-referencing it to access the content of a variable
    int myAge = 21;
    int *pointerToMyAge;
    pointerToMyAge = &myAge;
    cout<<"Age is : "<<*pointerToMyAge<<endl;

//    memory allocation and pointers
    int *newPointer = new int;
    *newPointer = 20;
    cout<<"Value stored at the location pointed to by the pointer newPointer : "<<*newPointer<<"\n";
    delete newPointer;

//    memory allocation of multiple ints
    int *pointerToAges = new int[5];
    *pointerToAges = 2;
    cout<<*pointerToAges<<"\n";
    *(pointerToAges+1)= 3;
    cout<<*(pointerToAges+1)<<endl;
    delete [] pointerToAges;

//    pointers and arrays
    int fibFive[5] = {1,2,3,5,8};
    int *pointerToFibFive = fibFive;
    cout<<"Fourth element of fibFive : "<<pointerToFibFive[3]<<"\n";

//    calling the executeTypesOfPointersCode
    executeTypesOfPointersCode();

    return 0;
}
