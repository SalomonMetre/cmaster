#include <stdio.h>

int main(){
    char _char;
    printf("Enter a character : ");
    scanf("%c", &_char);
    switch (_char)
    {
    //super ugly
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("%c is a vowel\n", _char);
        break;
    default:
        printf("%c is not a vowel\n", _char);
        break;
    }
    return 0;
}