#include <iostream>
using std::cin, std::cout, std::endl;

int main() {
//    declaring an array, checking its size, assigning elements to it and printing them
    int myArray [5];
    cout<<"Size of the array is : "<<sizeof(myArray)<<"\n";
    for (int i=0; i<5; i++){
        myArray[i]=i;
    }
    for(auto number : myArray){
        cout<<number<<"\n";
    }
    return 0;
}
