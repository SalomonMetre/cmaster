#include <stdio.h>

int main(){
    int m,n, sum = 0;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(; m<=n;m++){
        sum+=m;
    }
    printf("The sum is : %i\n", sum);
    return 0;
}