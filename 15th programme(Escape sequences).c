/*An escape sequence in C language is a sequence of
characters */
/*It doesn't represent itself when used inside a
string literal or character*/
/*it is represented by two or ore characters starting with
backslash(\)*/
/*There are many eescape sequences */
/*some importants are:
1. "\n" creates a new line.
2. "\t" creates a tab(horizontal)
3. "\b" creates a backspace
*/
/*if a coder wants to print a backslash(\), single quote('),
double quote(") he needs to escape it(i.e. use a backslash
before it.)*/

#include <stdio.h>
int main()
{
    printf("my name is \n miraz");
    printf("hello \t this is miraz \a ");
    printf("hello \\");

    return 0;
}