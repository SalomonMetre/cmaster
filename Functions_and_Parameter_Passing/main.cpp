#include <iostream>
using std::cout, std::endl;

void swapWithValues(int num1, int num2){
    int temp = num2;
    num2 = num1;
    num1 = temp;
}

void swapWithReferences(int &num1, int &num2){
    int temp = num2;
    num2 = num1;
    num1 = temp;
}

void swapWithAddresses(int *num1, int *num2){
//    dereferencing the pointers to use their values
    int temp = *num2;
    *num2 = *num1;
    *num1 = temp;
}

// function that takes an array as a parameter
int getArraySum(const int arr[], int upperLimit){
    int sum = 0;
    for(int i=0; i<upperLimit; i++){
        sum += arr[i];
    }
    return sum;
}

//function that returns an array
int* getArrayOfSize(int size){
    int *newArray = new int[size];
    return newArray;
}

int main() {
    int a=2, b=3;

//    parameter passing by values
    swapWithValues(a,b);
    cout<<a<<" | "<<b<<endl;

//    parameter passing by reference
    swapWithReferences(a,b);
    cout<<a<<" | "<<b<<endl;

//        parameter passing by reference
    swapWithAddresses(&a,&b);
    cout<<a<<" | "<<b<<endl;

//    get sum
    int myArray[5] = {1,2,3,4,5};
    cout<<getArraySum(myArray, 4)<<endl;

//    get my array
    int *secondArray = getArrayOfSize(5);
    secondArray[0] = 13;
    cout<<"First element is : "<<secondArray[0]<<endl;

    return 0;
}
