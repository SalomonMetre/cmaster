#include <stdio.h>
// #include <curses.h>

int main(){
    // initscr();
    float f_num;
    int i_num;
    printf("Enter ineteger number : ");
    scanf("%d", &i_num);
    // clear();
    f_num = (float)i_num;
    printf("Integer %d is float %f.\n", i_num, f_num);
    return 0;
}