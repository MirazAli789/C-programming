/*write a programme to check whether the user input character is a vowel or not*/
#include <stdio.h>
int main()
{
    char c;
    c = printf("enter a character\n");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
        printf("entered character is a vowel\n");      
            break;
    case 'e':
        printf("entered character is a vowel\n");
            break;
    case 'i':
        printf("entered character is a vowel\n");
            break;
    case 'o':
        printf("entered character is a vowel\n");
            break;
    case 'u':
        printf("entered character is a vowel\n");
            break;

    default:
        printf("entered character is not a vowel\n");
            break;
    }

    return 0;
}
