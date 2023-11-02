// Q 24. What will be the output of following program?

#include <stdio.h>
void main() 
{
    int x = printf("GLA UNIVERSITY");
   	printf("%d", x);
}

// Ans- code will execute and give the output=> GLA UNIVERSITY14
// here extra 14 is the length of value.
// but with 1 warning- return type of 'main' is not 'int'
// and if we replace void type with int then no warning will come and program 
// will executed.