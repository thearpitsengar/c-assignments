// Q26. What will be the output of following program?

#include <stdio.h>
void main() 
{
    int x = printf("C is placement oriented Language") – printf("Hi");
    printf("%d %o %x", x,x,x);
}

// Ans- here on executing this code, it will produce 1 warning and 2 errors
// unexpected character '-'