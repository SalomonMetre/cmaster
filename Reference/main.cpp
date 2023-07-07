//The following program illustrates the concepts of reference
//as used in C and C++

#include <iostream>
using std::cout, std::endl;

int main() {
    int firstVariable {12};
    int &sameVariable = firstVariable;

    int secondVariable = 15;
    sameVariable = secondVariable;

    cout<<"Value of first variable : "<<firstVariable<<endl;
    cout<<"Value of the same variable using a reference to it : "<<sameVariable<<endl;
    return 0;
}
