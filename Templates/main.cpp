#include <iostream>

template <class T>
class MyInt{
private:
    T number;
public:
    MyInt(T a) : number(a){}
    MyInt<T> operator+(MyInt& other){
        return number + other.number;
    }
    friend std::ostream& operator<<(std::ostream& os, const MyInt& other){
        return os << "Object of type MyInt with value " << other.number;
    }
};

template <class T>
T addNumbers(T a, T b){
    return a+b;
}

int main() {
    int a = 12, b = 13;
    float x = 12.5, y = 24.3;
    MyInt<double> myNumberOne(12), myNumberTwo(14);
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"Sum of "<<a<<" and "<<b<<" is : "<<addNumbers(a,b)<<std::endl;
    std::cout<<"Sum of "<<x<<" and "<<y<<" is : "<<addNumbers(x,y)<<std::endl;

//    using operator overloading
    std::cout<<"Sum of "<<myNumberOne<<" and "<<myNumberTwo<<" is : "<<myNumberOne+myNumberTwo<<std::endl;
//    using external function
    std::cout<<"Sum of "<<myNumberOne<<" and "<<myNumberTwo<<" is : "<<addNumbers(myNumberOne, myNumberTwo)<<std::endl;
    return 0;
}
