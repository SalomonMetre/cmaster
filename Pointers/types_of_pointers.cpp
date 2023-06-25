//
// Created by salomon-metre on 25/06/23.
//

#include "types_of_pointers.h"
#include <iostream>
using std::cout, std::endl;

struct Student{
    char firstName[7];
    char lastName[7];
};

void executeTypesOfPointersCode(){
    int age = 20;
    int *pointerToAge = &age;
    float height = 172.1;
    float *pointerToHeight = &height;
    struct Student *studentOne;
    cout<<"Size of the pointer of type Student : "<<sizeof(studentOne)<<"\n";
}