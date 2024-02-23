#include <stdio.h>

int main(){
    int userNumber;
    printf("Enter number : ");
    scanf("%d", &userNumber);
    printf("Number is : %s\n", userNumber%2 == 1? "odd" : "even");
    return 0;
}